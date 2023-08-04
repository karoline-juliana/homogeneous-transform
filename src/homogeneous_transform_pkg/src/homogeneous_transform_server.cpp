#include <rclcpp/rclcpp.hpp>
#include <homogeneous_transform_pkg/srv/homogeneous_transform.hpp>
#include <Eigen/Dense>
#include <cmath>

class HomogeneousTransformServer : public rclcpp::Node
{
public:
    HomogeneousTransformServer()
        : Node("homogeneous_transform_server")
    {
        // Criação do service
        service_ = this->create_service<homogeneous_transform_pkg::srv::HomogeneousTransform>(
            "homogeneous_transform",
            std::bind(&HomogeneousTransformServer::handleServiceRequest, this, std::placeholders::_1, std::placeholders::_2));
    }

private:
    void handleServiceRequest(const std::shared_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform::Request> request,
                              std::shared_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform::Response> response)
    {
        // Verificando se o ângulo está no intervalo válido (0 a 90 graus)
        if (request->angle < 0 || request->angle > 90)
        {
            RCLCPP_ERROR(this->get_logger(), "Ângulo inválido. Deve estar entre 0 e 90 graus.");
            response->success = false;
            response->message = "Ângulo inválido.";
            return;
        }

        // Convertendo o ângulo para radianos
        double theta_rad = request->angle * M_PI / 180.0;
        
        // Matriz de rotação em torno do eixo X
        double cos_theta = cos(theta_rad);
        double sin_theta = sin(theta_rad);
        Eigen::Matrix3d rotation_matrix;
        rotation_matrix << 1, 0, 0,
                           0, cos_theta, -sin_theta,
                           0, sin_theta, cos_theta;

        // Vetor de translação
        Eigen::Vector3d translation_vector(request->x, request->y, request->z);
        
        // Aplica a transformação homogênea
        Eigen::Vector3d transformed_vector = rotation_matrix * translation_vector;
        response->transformed_x = transformed_vector(0);
        response->transformed_y = transformed_vector(1);
        response->transformed_z = transformed_vector(2);

        response->success = true;
        response->message = "Transformação realizada com sucesso.";
    }

    rclcpp::Service<homogeneous_transform_pkg::srv::HomogeneousTransform>::SharedPtr service_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<HomogeneousTransformServer>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
