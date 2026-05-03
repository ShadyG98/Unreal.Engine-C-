#include <iostream>

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y);
    Date(long dateValue);
    void displayDate();
};

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

Date::Date(long dateValue) {
    year = dateValue / 10000;
    month = (dateValue - year * 10000) / 100;
    day = dateValue - year * 10000 - month * 100;
}

void Date::displayDate() {
    std::cout << day << "/" << month << "/" << year << "\n";
}

int main() {
    Date today(10, 10, 2020);
    Date today2(20201010L);
    
    today.displayDate();
    today2.displayDate();

    return 0;
}
