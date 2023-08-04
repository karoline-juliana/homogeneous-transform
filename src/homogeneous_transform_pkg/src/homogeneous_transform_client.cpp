#include "rclcpp/rclcpp.hpp"
#include "homogeneous_transform_pkg/srv/homogeneous_transform.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("homogeneous_transform_client");

    // Criação do cliente de serviço
    auto client = node->create_client<homogeneous_transform_pkg::srv::HomogeneousTransform>("homogeneous_transform");

    // Aguardar até que o serviço esteja disponível
    while (!client->wait_for_service(std::chrono::seconds(1)))
    {
        if (!rclcpp::ok())
        {
            RCLCPP_ERROR(node->get_logger(), "Interrupted while waiting for the service. Exiting.");
            return 1;
        }
        RCLCPP_INFO(node->get_logger(), "Service not available, waiting again...");
    }

    // Criação da solicitação
    auto request = std::make_shared<homogeneous_transform_pkg::srv::HomogeneousTransform::Request>();
    request->angle = 45.0; // Exemplo de ângulo (em graus)
    request->x = 1.0; // Exemplo de coordenada x
    request->y = 2.0; // Exemplo de coordenada y
    request->z = 3.0; // Exemplo de coordenada z

    // Envio da solicitação ao serviço
    auto result = client->async_send_request(request);

    // Verificando se o resultado é válido antes de acessar
    if (!result.valid()) {
        RCLCPP_ERROR(node->get_logger(), "Erro: O resultado não é válido.");
        rclcpp::shutdown();
        return 1;
    }

    // Aguardando a resposta do service
    if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS)
    {
        try {
            // Tentando obter o valor do resultado
            auto response = result.get();

            if (response->success)
            {
                RCLCPP_INFO(node->get_logger(), "Transformação realizada com sucesso.");
                RCLCPP_INFO(node->get_logger(), "Ponto original (x, y, z): (%f, %f, %f)", request->x, request->y, request->z);
                RCLCPP_INFO(node->get_logger(), "Ponto transformado (x, y, z): (%f, %f, %f)",
                            result.get()->transformed_x, result.get()->transformed_y, result.get()->transformed_z);
            }
            else
            {
                RCLCPP_ERROR(node->get_logger(), "Falha na chamada do serviço: %s", response->message.c_str());
            } // TODO: provavelmente o erro vem daqui, pesquisar depois
        } catch (const std::future_error& e) {
            // Captura e imprime a exceção em caso de erro
            RCLCPP_ERROR(node->get_logger(), "Erro ao obter resultado do serviço: %s", e.what());
        }
    }
    else
    {
        RCLCPP_ERROR(node->get_logger(), "Falha na chamada do serviço.");
    }

    rclcpp::shutdown();
    return 0;
}
