#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 6.2
    std::cout << "************** Коллекторы **************\n";

    int oplata = 0, dolg;

    std::string name;
    std::cout << "Введите ваше имя? ";
    std::cin >> name;
    std::cout << "Какова ваша сумма долга? ";
    std::cin >> dolg;

    while (oplata < dolg) {
        std::cout << name << ", ваша задолжность составляет " << dolg << " руб. Сколько рублей вы внесете прямо сейчас, чтобы ее погасить?";
        std::cin >> oplata;
        if (oplata < 0) {
            std::cout << "Ошибка! Данную сумму нельзя зачислить.\n ";
        }
    }
    std::cout << "Ваш долг погашен! Благодарим вас. ";
}
