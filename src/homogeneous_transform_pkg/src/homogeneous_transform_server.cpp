#include "rclcpp/rclcpp.hpp"
#include "homogeneous_transform_pkg/srv/homogeneous_transform.hpp"
#include <cmath>

class HomogeneousTransformServer : public rclcpp::Node
{
public:
    HomogeneousTransformServer()
        : Node("homogeneous_transform_server")
    {
        // Criação do serviço
        service_ = this->create_service<homogeneous_transform_pkg::srv::HomogeneousTransform>(
            "homogeneous_transform",
            std::bind(&HomogeneousTransformServer::handleServiceRequest, this, std::placeholders::_1, std::placeholders::_2));
    }

private:
    void handleServiceRequest(const std::shared_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform::Request> request,
                              std::shared_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform::Response> response)
    {
        // Verifica se o ângulo está no intervalo válido (0 a 90 graus)
        if (request->angle < 0 || request->angle > 90)
        {
            RCLCPP_ERROR(this->get_logger(), "Ângulo inválido. Deve estar entre 0 e 90 graus.");
            response->success = false;
            response->message = "Ângulo inválido.";
            return;
        }

        // Aplica a transformação homogênea
        double theta_rad = request->angle * M_PI / 180.0;
        double cos_theta = cos(theta_rad);
        double sin_theta = sin(theta_rad);

        response->transformed_x = request->x + cos_theta;
        response->transformed_y = request->y - sin_theta;
        response->transformed_z = request->z + 3 * sin_theta + 2 * cos_theta;

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
