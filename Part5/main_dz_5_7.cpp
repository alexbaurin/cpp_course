#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 7
    std::cout << "************** Банкомат. **************\n";

    int takeCash;
    int coinSum; // купюры

    // 100, 200, 500, 1000, 2000, 5000 - nominals

    std::cout << "Какую сумму вы желаете снять: ";
    std::cin >> takeCash;

    if ( takeCash > 150000) {
        std::cout << "Ошибка! Лимит превышен.";
    } else if (takeCash % 100 != 0) {
        std::cout << "Выдать ровно заданную сумму денег невозможно!";
    } else {
        coinSum += takeCash / 5000;
        takeCash = takeCash % 5000;
        coinSum += takeCash / 2000;
        takeCash = takeCash % 2000;
        coinSum += takeCash / 1000;
        takeCash = takeCash % 1000;
        coinSum += takeCash / 500;
        takeCash = takeCash % 500;
        coinSum += takeCash / 200;
        takeCash = takeCash % 200;
        coinSum += takeCash / 100;
    }
    std::cout << "Минимальное количество купюр: " << coinSum;

}

