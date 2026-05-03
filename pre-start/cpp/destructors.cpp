#include <iostream>

int globalPersonCount;

class Person {
private:
    int socialSecurityNumber;

public:
    Person(int _ssn);
    ~Person();
    void display();
};

Person::Person(int _ssn) {
    socialSecurityNumber = _ssn;
    globalPersonCount++;
    std::cout << "Person created with SSN " << socialSecurityNumber << "\n";
}

Person::~Person() {
    globalPersonCount--;
    std::cout << "Person destroyed with SSN " << socialSecurityNumber << "\n";
}

void Person::display() {
    std::cout << "Person with SSN " << socialSecurityNumber << "\n";
}

void createScope();

int main() {
    createScope();
    std::cout << "Number of persons: " << globalPersonCount << "\n";
    return 0;
}

void createScope() {
    Person person1(1);
    person1.display();
    Person person2(2);
    person2.display();
}
