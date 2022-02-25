#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 3
    std::cout << "************** Майские! **************\n";

    int dayNumber;
    std::string dayType;

    std::cout << "Введите день месяца мая (31 день): ";
    std::cin >> dayNumber;

    int divisionResult = dayNumber % 7;

    if (divisionResult == 6 || divisionResult == 7 || (dayNumber >=1 && dayNumber <= 5) || (dayNumber >= 8 && dayNumber <= 10)) {
        dayType = "Выходной";
    } else {
        dayType = "Рабочий";
    }

    std::cout << dayNumber << " День месяца - " << dayType << "\n";
    std::cout << "1-е число  - понедельник!\n\n";

    // task 4
    int startingDay;

    std::cout << "А теперь введите номер дня недели, с которого начинается месяц: ";
    std::cin >> startingDay;

    divisionResult += startingDay - 1;
    if (divisionResult == 6 || divisionResult == 7 || (dayNumber >=1 && dayNumber <= 5) || (dayNumber >= 8 && dayNumber <= 10)) {
        dayType = "Выходной";
    } else {
        dayType = "Рабочий";
    }

    std::cout << dayNumber << " День месяца - " << dayType << "\n";

}
