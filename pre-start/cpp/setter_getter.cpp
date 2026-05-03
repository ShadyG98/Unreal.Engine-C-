#include <iostream>

class Number {
private:
    int x, y;

public:
    Number();
    void setX(int value);
    void setY(int value);
    int getX() const;
    int getY() const;
};

Number::Number() : x(0), y(0) {}

void Number::setX(int value) {
    x = value;
}

void Number::setY(int value) {
    y = value;
}

int Number::getX() const {
    return x;
}

int Number::getY() const {
    return y;
}

int main() {
    Number num;
    num.setX(1);
    num.setY(2);
    std::cout << "x=" << num.getX() << " y=" << num.getY() << "\n";

    return 0;
}
