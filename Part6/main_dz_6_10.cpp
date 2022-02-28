#include <iostream>
#include <string>
#include <windows.h>
#include <locale.h>
//#include <codecvt>
//#include <string>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8); // 65001 CP_UTF8
    SetConsoleCP(CP_UTF8);
    //std::locale utf8_to_utf16(std::locale(), new std::codecvt_utf8<wchar_t>);

    // task 6.10
    std::cout << "************** Угадай число - наоборот **************\n";

    int number, upBound = 63, downBound = 0;
    std::string answer;

    std::cout << "Загадайте число в диапазоне от 0 до 63:";

    while ( (upBound - downBound) > 1) {
        number = downBound + (upBound - downBound) / 2;
        std::cout << "\nВаше чило Больше " << number << " (yes/no)?";
        std::cin >> answer;
        //std::getline(std::cin, answer);
        if (answer == "yes" ) {
            downBound = number;
        } else if (answer == "no" ) {
            upBound = number;
        } else std::cout << " Ошибка ввода! ";
    }

    std::cout << "\nВы загадали число " << number;
}