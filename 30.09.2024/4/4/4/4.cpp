#include <iostream>
using namespace std;

int main()
{
    //Кириллица в терминале
    setlocale(LC_ALL, "Russian");
    
    double a, b, c; // коэффициенты параболы

    // Ввод данных
    cout << "Введите коэффициент a: ";
    cin >> a;
    cout << "Введите коэффициент b: ";
    cin >> b;
    cout << "Введите коэффициент c: ";
    cin >> c;

    // Рассчитать координаты вершины
    double x = -b / (2 * a);
    double y = a * x * x + b * x + c;

    // Вывод результата
    cout << "Координаты вершины: (" << x << ", " << y << ")" << endl;

    return 0;
}
