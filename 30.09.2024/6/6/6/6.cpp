#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //Кириллица в терминале
    setlocale(LC_ALL, "Russian");

    double a, r; // сторона треугольника, радиус круга

    // Ввод данных
    cout << "Введите сторону треугольника: ";
    cin >> a;
    cout << "Введите радиус круга: ";
    cin >> r;

    // Рассчитать количество кругов
    double n = (pow(a/(2*r), 2)-1)/2

    // Вывод результата
    cout << "Количество кругов: " << floor(n) << endl;

    return 0;
}
