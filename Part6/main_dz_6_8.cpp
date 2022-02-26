#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 6.8
    std::cout << "************** Сокращение дроби **************\n";

    int m, n, k = 2;

    std::cout << "Введите числитель и знаменатель дроби: ";
    std::cin >> m >> n;

    while (k <= m) {
        if ( (n%k + m%k) == 0) {
            m /= k;
            n /= k;
        }
        else ++k;
    }

    std::cout << "Сокращенная дробь: " << m << "/" << n;

}