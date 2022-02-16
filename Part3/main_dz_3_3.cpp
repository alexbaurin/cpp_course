#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a = 42;
    int b = 153;

    // method 1
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    // method 2
    a = a + b;
    b = a - b ;
    a = a - b;

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

}
