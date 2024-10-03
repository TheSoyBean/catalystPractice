#include <iostream>

bool isLeapYear(int year);

int main() {

// prompts user to input year
    int year;
    std::cout << "What year is it?\n";
    std::cin >> year;

// Tells use if the year is a leap year or not.
    if (isLeapYear(year)) {
        std::cout << "Leap Year!\n";
    } else {
        std::cout << "Not a Leap Year.\n";
    }


    return 0;
}


// Checks if the year is a leap year or not.
bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}


