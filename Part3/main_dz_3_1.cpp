#include <iostream>
#include <windows.h>
#include <locale.h>


int main() {
    // For Russian
    //system("chcp 65001");
    //SetConsoleOutputCP(CP_UTF8);

    std::string planet;
    std::string star;
    std::string ranger;
    std::uint8_t money;

    std::cout << "Введите название планеты: ";
    std::cin >> planet;
    std::cout << "Введите название звездной системы: ";
    std::cin >> star;
    std::cout << "Введите ваше имя, рейнджер: ";
    std::cin >> ranger;
    std::cout << "Введите сумму вознаграждения: ";
    std::cin >> money;

    std::cout << "Как вам, " << ranger << ", известно, мы — раса мирная, поэтому на наших военных кораблях используются наемники с других планет.\n";
    std::cout << "Система набора отработана давным-давно. Обычно мы приглашаем на наши корабли людей с планеты " << planet << " системы " << star << ".\n\n"
                                                                                                                                                     "";
    std::cout << "Но случилась неприятность — в связи с большими потерями в последнее время престиж профессии сильно упал, и теперь не\n";
    std::cout << "так-то просто завербовать призывников. Главный комиссар планеты " << planet << ", впрочем, отлично справлялся, но недавно его наградили\n";
    std::cout << "орденом Сутулого с закруткой на спине, и его на радостях парализовало! Призыв под угрозой срыва!\n\n";

    std::cout << ranger << ", вы должны прибыть на планету " << planet << " системы " << star << " и помочь выполнить план призыва. Мы готовы выплатить вам\n";
    std::cout << "премию в " << money << " кредитов за эту маленькую услугу.\n";

}