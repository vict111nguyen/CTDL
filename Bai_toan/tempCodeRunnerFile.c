#include <iostream>

// Định nghĩa class Engine
class Engine {
public:
    void start() {
        std::cout << "Engine started.\n";
    }
};

// Định nghĩa class Car sử dụng Dependency Injection thông qua constructor
class Car {
private:
    Engine* engine;

public:
    // Constructor Injection
    Car(Engine* eng) : engine(eng) {}

    void start() {
        std::cout << "Car started. ";
        engine->start();  // Gọi phương thức start của đối tượng Engine
    }
};

int main() {
    // Tạo đối tượng Engine
    Engine myEngine;

    // Tạo đối tượng Car và inject Engine vào qua constructor
    Car myCar(&myEngine);

    // Khởi động xe (Car), sẽ tự động khởi động động cơ (Engine)
    myCar.start();

    return 0;
}