#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 6.5
    std::cout << "************** Счастливый билетик **************\n";

    int ticketNum = 0, sum = 0;

    while (ticketNum == 0) {
        std::cout << "Введите номер вашего билета (6 цифр): ";
        std::cin >> ticketNum;
        if (ticketNum > 1000000 || ticketNum  < 100000) {
            ticketNum = 0;
            std::cout << "Ошибка! Введите положительное шестизначное число.\n ";
        }
    }

    while (ticketNum > 0) {
        if (ticketNum > 100 && ticketNum < 1000) sum *= -1;
        sum += ticketNum % 10;
        ticketNum /= 10;
        //std::cout << ticketNum << "\n";
        //std::cout << sum << "\n";
    }

    if (sum == 0) std::cout << "\nВаш билет - счастливый!";
    else std::cout << "\nВаш билет - несчастливый!";
}