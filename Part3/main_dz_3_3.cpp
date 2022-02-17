#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a = 42;
    int b = 153;

    std::cout << "Изначальное значение a: " << a << "\n";
    std::cout << "Изначальное значение b: " << b << "\n";

    // method 1
    int temp = a;
    a = b;
    b = temp;

    std::cout << "Перестановка первая.\n";
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    // method 2
    a = a + b;
    b = a - b ;
    a = a - b;

    std::cout << "Перестановка вторая.\n";
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    // method 3

    a ^= b; // XOR operation
    b ^= a;
    a ^= b;

    // a ^= b ^= a ^= b; // Or single-row

    std::cout << "Перестановка третья.\n";
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

}
