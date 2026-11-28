#include <iostream>
#include <string>

int main() {
    std::string config = R"json({
        "name": "C++ Tutorial",
        "version": 1,
        "enabled": true,
        "settings": {
            "language": "C++",
            "theme": "dark"
        }
    })json";

    std::cout << config;
    return 0;
}
