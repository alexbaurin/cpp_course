#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 6.7
    std::cout << "************** Числа Фибоначчи **************\n";

    int previous = 1, current = 1, count = 2, num;

    std::cout << "Введите номер числа в последовательности: ";
    std::cin >> num;

    while (count < num) {
        current += previous;
        previous = current - previous;
        ++count;
    }

    std::cout << "Под указаным номером стоит число " << current;

}