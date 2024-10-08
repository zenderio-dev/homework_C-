#include <iostream>

using namespace std;

int main() {
    //Кириллица в терминале
    setlocale(LC_ALL, "Russian");

    int h, m, s; // часы, минуты, секунды

   // Ввод текущего времени
    cout << "Введите часы (0-23): ";
    cin >> h;
    cout << "Введите минуты (0-59): ";
    cin >> m;
    cout << "Введите секунды (0-59): ";
    cin >> s;

    // Округление до целых минут
    if (s >= 30) {
        m++;  // Увеличиваем минуты на 1, если секунды 30 или больше
    }
    
    // Если минуты равны 60, увеличиваем часы и обнуляем минуты
    if (m == 60) {
        h++;
        m = 0;
    }

    // Округление до целых часов
    if (m >= 30) {
        h++;  // Увеличиваем часы на 1, если минуты 30 или больше
    }

    // Если часы равны 24, обнуляем часы
    if (h == 24) {
        h = 0;
    }

    // Вывод округленного времени
    cout << "Округленное время: " << h << "ч ";
    
    // Проверяем, нужно ли выводить минуты
    if (m >= 30 || s >= 30) {
        cout << m << "мин" << std::endl;
    } else {
        cout << "0мин" << std::endl; // Если меньше 30 минут, выводим 0 минут
    }

    return 0;
}
