#include <iostream>
#include <string>

int main()
{
    std::string json_config = R"({
        "app_name": "MyShop",
        "version": "1.0.0",
        "database": {
            "host": "localhost",
            "port": 5432
        }
    })";

    std::cout << "Application Configuration:" << std::endl;
    std::cout << json_config << std::endl;

    return 0;
}