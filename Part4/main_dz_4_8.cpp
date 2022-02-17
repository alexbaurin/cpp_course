#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int salary1 =0, salary2 = 0, salary3 = 0, avg, min, max;
    bool equal = false;

    std::cout << "Введите три числа (зарплаты сотрудников): ";
    std::cin >> salary1 >> salary2 >> salary3;

    max = salary1;
    if (salary2 > max) {
        max = salary2;
    }
    if (salary3 > max) {
        max = salary3;
    }

    min = salary1;
    if (salary2 < min) {
        min = salary2;
    }
    if (salary3 < min) {
        min = salary3;
    }

    std::cout << "Максимальная зарплата: " << max;
    std::cout << "\nМинимальная зарплата: " << min;

    std::cout << "\nРазница между максимальной и минимальной зарплатами: " << max - min;

    avg = (salary1 + salary2 + salary3)/3;
    std::cout << "\nСредняя зарплата: " << avg;

}