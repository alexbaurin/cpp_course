#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task_1
    int var1, var2;

    std::cout << "Введите первое число: ";
    std::cin >> var1;
    std::cout << "Введите второе число: ";
    std::cin >> var2;

    if (var1 < var2) {
        std::cout << "Минимальное число: " << var1;
    } else if (var2 < var1) {
        std::cout << "Минимальное число: " << var2;
    } else {
        std::cout << "Числа равны!";
    }

    // task_2
    int sum;
    std::cout << "\nТеперь сложите эти 2 числа в уме. Какой результат получился? ";
    std::cin >> sum;
    if (sum - var1 - var2 == 0) {
        std::cout << "Указанная сумма чисел верна!";
    } else {
        sum = var1 + var2;
        std::cout << "Ответ не верный! Сумма чисел: " << sum;
    }

    // task_3
    std::cout << "\n";
    if (sum % 2 == 0) {
        std::cout << "Сумма чисел есть четное число! ";
    } else {
        std::cout << "Сумма чисел является нечетным числом! ";
    }

    // task_5
    std::cout << "\nПроверим делимость чисел друг на друга! Введите делимое: ";
    std::cin >> var1;
    std::cout << "\nВведите делитель: ";
    std::cin >> var2;
    if (var1 % var2 == 0) {
        std::cout << "\nБольшее число делится на меньшее нацело! ";
    } else if (var1 % var2 < 1 ) {
        std::cout << "\nДелимое меньше делителя. ";
    } else {
        std::cout << "\nБольшее число не делится на меньшее! ";
    }

    // task_4
    int points = 0;
    std::cout << "\nВведите количество очков опыта: ";
    std::cin >> points;
    if (points > 5000) {
        std::cout << "\nВыш уровень повышен до 4-го! ";
    } else if (points > 2500) {
        std::cout << "\nВыш уровень повышен до 3-го! ";
    } else if (points > 1000) {
        std::cout << "\nВыш уровень повышен до 2-го! ";
    } else {
        std::cout << "\nУровень вышего героя - 1. Количество очков " << points;
    }

}
