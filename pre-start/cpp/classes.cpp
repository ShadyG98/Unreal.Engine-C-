/*
 * Create a Car class with keys and serial numbers
 * that can be started, accelerated, and braked.
 * Create instances of the Car class that can perform
 * these actions, but only with their respective keys.
 */
#include <iostream>
#include <string>

class Car {
private:
    int key;
    int serialNumber;
    bool access;
    int speed;

public:
    Car(int _key, int _serialNumber);
    void start(int _key);
    void accelerate();
    void brake();
    std::string brand;
    std::string model;
};

Car::Car(int _key, int _serialNumber) {
    key = _key;
    serialNumber = _serialNumber;
    access = false;
    speed = 0;
}

void Car::start(int _key) {
    if (_key == key) {
        access = true;
        std::cout << "Car started\n";
    } else {
        access = false;
        std::cout << "Wrong key! Access denied.\n";
    }
}

void Car::accelerate() {
    if (access) {
        speed += 10;
        std::cout << "Your speed is " << speed << "\n";
    } else {
        std::cout << "No access. Start the car first.\n";
    }
}

void Car::brake() {
    if (access) {
        speed -= 10;
        std::cout << "Your speed is " << speed << "\n";
    } else {
        std::cout << "No access. Start the car first.\n";
    }
}

int main() {
    Car car1(123, 55);
    Car car2(124, 56);
    Car car3(125, 57);

    car1.start(125);
    car1.accelerate();
    car1.accelerate();
    car1.accelerate();
    car1.brake();

    car2.start(124);

    return 0;
}
