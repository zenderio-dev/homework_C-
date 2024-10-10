#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //Кириллица в терминале
    setlocale(LC_ALL, "Russian");

    double k, p, s; // стартовый капитал, ежемесячный прирост, целевая сумма

    // Ввод данных
    cout << "Введите стартовый капитал (руб.): ";
    cin >> k;
    cout << "Введите ежемесячный прирост (%): ";
    cin >> p;
    cout << "Введите целевую сумму (руб.): ";
    cin >> s;

    // Рассчитать ежемесячный прирост капитала
    double monthlyGrowth = (p / 100) + 1;

    // Рассчитать количество месяцев, необходимое для накопления суммы s
    double months = log(s / k) / log(monthlyGrowth);

    // Рассчитать количество лет
    double years = months / 12;

    // Вывод результата
    cout << "Коммерсант накопит сумму " << s << " рублей через " << round(years) << " лет." << endl;

    return 0;
}
