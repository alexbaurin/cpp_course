#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // task 8
    std::cout << "************** Треугольник на координатной плоскости. **************\n";

    int x1, y1, x2, y2, x3, y3;
    //int angle1, angle2;

    std::cout << "Можно ли по данным трем точкам построить треугольник?\n ";

    std::cout << "Введите координаты первой точки (через пробел): ";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты второй точки: ";
    std::cin >> x2 >> y2;
    std::cout << "Введите координаты третьей точки: ";
    std::cin >> x3 >> y3;

    //angle1 = (x2 - x1) / (y2 - y1);
    //angle2 = (x3 - x1) / (y3 - y1);

    if ( (y3-y1)*(x2-x1) == (x3-x1)*(y2-y1) ) {
        std::cout << "No! ";
    } else {
        std::cout << "Yes! ";
    }

}
