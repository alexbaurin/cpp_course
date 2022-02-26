#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 6.3
    std::cout << "************** Слишком большие числа **************\n";

    int number, count = 0;

    std::cout << "Введите большое число:";
    std::cin >> number;

    while (number != 0) {
        number /= 10;
        ++count;
    }
    std::cout << "В вашем числе количество цифр равно " << count;
}
