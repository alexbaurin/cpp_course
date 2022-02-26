#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 6.1
    std::cout << "************** Кукушка **************\n";

    int hour = 0, count = 0;

    while (hour <= 0) {
        std::cout << "Который час? ";
        std::cin >> hour;
        if (hour <= 0) {
            std::cout << "Ошибка! Введите положительное число.\n ";
        }
    }

    while (count < hour) {
        std::cout << "Ку-ку!\n";
        ++count;
    }
}