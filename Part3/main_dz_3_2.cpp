#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

    std::cout << "Маршрутка\n";

    int totalPassengers = 0; // в маршрутке сейчас
    int inCount = 0;
    int outCount = 0;
    int ticketCost = 20;
    int sumExited = 0;
    std::string currentStation = "Улица Программистов";

    // 1 (отдельный метод).
    std::cout << "Прибываем на остановку " << currentStation << ". В салоне пассажиров: " << totalPassengers << "\n";

    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> outCount;

    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> inCount;

    totalPassengers += inCount - outCount;
    sumExited += outCount;
    // проверка на валидность

    std::cout << "Отправляемся с остановки " << currentStation << ". В салоне пассажиров: " << totalPassengers << "\n";
    std::cout << "-----------Едем---------\n";

    // 2.
    currentStation = "Проспект Алгоритмов";

    std::cout << "Прибываем на остановку " << currentStation << ". В салоне пассажиров: " << totalPassengers << "\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> outCount;

    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> inCount;

    totalPassengers += inCount - outCount;
    sumExited += outCount;

    std::cout << "Отправляемся с остановки " << currentStation << ". В салоне пассажиров: " << totalPassengers << "\n";
    std::cout << "-----------Едем---------\n";

    // 3.
    currentStation = "Сортировочная";

    std::cout << "Прибываем на остановку " << currentStation << ". В салоне пассажиров: " << totalPassengers << "\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> outCount;

    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> inCount;

    totalPassengers += inCount - outCount;
    sumExited += outCount;

    std::cout << "Отправляемся с остановки " << currentStation << ". В салоне пассажиров: " << totalPassengers << "\n";
    std::cout << "-----------Едем---------\n";

    // 4.
    currentStation = "Конечная";

    std::cout << "Прибываем на остановку Проспект Алгоритмов. В салоне пассажиров: " << totalPassengers << "\n";

    sumExited += totalPassengers;

    std::cout << "-----------Приехали! Конечная---------\n";
    std::cout << "Из маршрутки выходит "<< totalPassengers << " пассажиров.\n";

    // Calculating

    int totalCash = ticketCost * sumExited;
    int twentyPercent = 20*totalCash/100;

    std::cout << "Всего заработали:" << totalCash << "руб." << "\n";
    std::cout << "Зарплата водителя:" << 25*totalCash/100 << "руб." << "\n";
    std::cout << "Расходы на топливо:" << twentyPercent << "руб." << "\n";
    std::cout << "Налоги:" << twentyPercent << "руб." << "\n";
    std::cout << "Расходы на ремонт машины:" << twentyPercent << "руб." << "\n";
    std::cout << "Итого доход:" << 15*totalCash/100 << "руб." << "\n";


}
