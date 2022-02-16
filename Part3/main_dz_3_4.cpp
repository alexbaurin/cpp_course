#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "Бамбук и Вредители!\n";

    int startHeight = 100; // sm = m/10
    int growth = 50; // sm
    int losses = 20; // sm
    //int totalDaysCount = 6;

    // part 1
    int thirdDayHeight = startHeight + ((growth - losses) * 2 + (growth / 2));

    std::cout << "Высота бамбука в середине третьего дня: " << thirdDayHeight << " см.\n";

    // part 2

    int growBound = 300; // sm or 3 meters(m)

    std::cout << "Введите начальную высоту саженца: ";
    std::cin >> startHeight;
    std::cout << "Введите скорость роста: ";
    std::cin >> growth;
    std::cout << "Введите скорость поедания: ";
    std::cin >> losses;
    std::cout << "Введите высоту для сбора урожая: ";
    std::cin >> growBound;

    int growHeight = growBound - startHeight;
    int oneCycleHeight = (growth - losses);
    int resultDays = (growHeight) / oneCycleHeight;
    std::cout << "Дней для сбора урожая - " << resultDays;


}
