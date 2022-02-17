#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int cash;
    int nalog = 0;

    std::cout << "Введите размер прибыли: ";
    std::cin >> cash;

    if (cash > 50000) {
        nalog += (cash - 50000) * 30 / 100;
        cash = 50000;
    }
    if (cash > 10000) {
        nalog += (cash - 10000) * 20 / 100;
        cash = 10000;
    }

    nalog += cash * 13 / 100;

    std::cout << "Ваш налог: " << nalog << " рублей";
}