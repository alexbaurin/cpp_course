#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 6.6
    std::cout << "************** Степень двойки **************\n";

    int checkedNum;

    std::cout << "Введите число: ";
    std::cin >> checkedNum;

    while (checkedNum % 2 == 0) {
        checkedNum /= 2;
    }

    if (checkedNum == 1) std::cout << "Степень двойки";
    else std::cout << "Нет";

}