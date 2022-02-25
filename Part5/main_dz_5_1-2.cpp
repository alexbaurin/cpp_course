#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 1
    std::cout << "******* Задача 1. Военный фельдшер. *******\n";

    int medicalCount = 0, alcoVolume = 0 ;

    std::cout << "Сколько у фельдшера мл медицинского спирта ? ";
    std::cin >> alcoVolume;
    std::cout << "Сколько у фельдшера походных аптек? ";
    std::cin >> medicalCount;

    if (alcoVolume >= 2000 || medicalCount >= 5) {
        std::cout << "Фельдшера достаточно снаряжения для выхода на работу с ранеными! ";
    } else {
        std::cout << "Фельдшера не хватает снаряжения для выхода на работу с ранеными! ";
    }

    // ---------------------------------------------
    // task 2
    std::cout << "******* Задача 2. Полет нормальный! *******\n";

    int aircraftSpeed = 0, altitude = 0;

    std::cout << "Какова текущая скорость самолета? ";
    std::cin >> aircraftSpeed;
    std::cout << "Какова его текущая высота полета? ";
    std::cin >> altitude;

    if (aircraftSpeed > 750 && aircraftSpeed < 850 && altitude > 9000 && altitude < 9500) {
        std::cout << "Самолет летит правильным эшелоном! ";
    } else {
        std::cout << "Самолет летит не верным эшелоном! ";
    }

}