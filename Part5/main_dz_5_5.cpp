#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 5
    std::cout << "************** Склонение русских слов. **************\n";

    int productCost;
    std::string wordVariant;

    std::cout << "Введите цену товара: ";
    std::cin >> productCost;

    int divisionResult = productCost % 10;

    if (divisionResult == 1 ) {
        wordVariant = " рубль";
    } else if (divisionResult > 1  && divisionResult < 5) {
        wordVariant = " рубля";
    } else {
        wordVariant = " рублей";
    }

    std::cout << " Цена вашего товара " << productCost << wordVariant << "\n";

}
