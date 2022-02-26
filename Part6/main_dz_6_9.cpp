#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 6.9
    std::cout << "************** Вклады **************\n";

    int vklad, percent, accumulate, years = 0;

    std::cout << "Введите размер вклада, проценты по нему и сумму которую вы желаете накопить (в указанном порядке):";
    std::cin >>vklad >> percent >> accumulate;

    while (vklad < accumulate) {
        vklad += vklad * percent/100;
        ++years;
    }
    std::cout << "Вы накопите данную сумму в течении " << years << " (лет)";
}