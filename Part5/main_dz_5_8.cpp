#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 8
    std::cout << "************** Грустное совершеннолетие. **************\n";

    int day, month, year;
    int currentDay, currentMonth, currentYear;
    int yearsDiff, monthDiff, daysDiff;

    std::cout << "Введите дату вашего рождения (число год месяц, через пробел): ";
    std::cin >> day >> month >> year;
    std::cout << "Введите текущую дату (число год месяц, через пробел): ";
    std::cin >> currentDay >> currentMonth >> currentYear;

    yearsDiff = currentYear - year;
    monthDiff = currentMonth - month;
    daysDiff = currentDay - day;
    if (yearsDiff > 18 || yearsDiff == 18 && (monthDiff > 0 || (monthDiff==0 && daysDiff > 0) ) ) {
        std::cout << "Вам уже можно продавть алкоголь! ";
    } else {
        std::cout << "Вам еще нельзя продавть алкоголь! ";
    }

}
