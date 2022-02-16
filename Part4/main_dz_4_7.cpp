#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    //setlocale(LC_ALL, "Russian");

    int dayNumber;
    std::string dayName;

    std::cout << "************** Меню ресторана. **************\n";
    std::cout << "Введите день недели(от 1 (понедельник) до 7 (воскресенье)): ";
    std::cin >> dayNumber;

    int divisionResult = dayNumber % 7;
    if (divisionResult == 1) {
        dayName = "Понедельник";
    } else if (divisionResult == 2) {
        dayName = "Вторник";
    } else if (divisionResult == 3) {
        dayName = "Среда";
    } else if (divisionResult == 4) {
        dayName = "Четверг";
    } else if (divisionResult == 5) {
        dayName = "Пятница";
    } else if (divisionResult == 6) {
        dayName = "Суббота";
    } else {
        dayName = "Воскресение";
    }

    std::cout << "День недели: " << dayName << "\n";

    std::string generalMenu = "Основное меню: Суп, картошка, салат, компот.";
    std::string specialMenu = "Дополнительное меню: Панна-котта, Малиновый Раф";

    std::cout << generalMenu << "\n";

    if (divisionResult == 6) {
        std::cout << "Доступно специальное меню: " << "\n";
        std::cout << specialMenu << "\n";
    }
}
