#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 6
    std::cout << "************** Задача про 2 коробки. **************\n";

    int a, b, c, m, n, k;

    std::cout << "Введите размеры первой коробки: ";
    std::cin >> a >> b >> c;
    std::cout << "Введите размеры второй коробки: ";
    std::cin >> m >> n >> k;

    if (a < m && b < n && c < k || a < m && b < k && c < n) {
        std::cout << " Первая коробка помещается внутри второй! " << "\n";
    } else if (b < m && a < n && c < k || b < m && a < k && c < n) {
        std::cout << " Первая коробка помещается внутри второй! " << "\n";
    } else if (c < m && a < n && b < k || c < m && a < k && c < n) {
        std::cout << " Первая коробка помещается внутри второй! " << "\n";
    } else {
        std::cout << " Первую коробку нельзя разместить внутри второй! " << "\n";
    }

}
