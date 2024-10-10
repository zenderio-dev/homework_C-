#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

// Функция для преобразования угла из градусов, минут и секунд в радианы
double degreesMinutesSecondsToRadians(int degrees, int minutes, int seconds) {
    // Преобразуем всё в десятичные градусы
    double decimalDegrees = degrees + minutes / 60.0 + seconds / 3600.0;

    // Приводим к диапазону от -360 до 360 для корректного преобразования
    if (decimalDegrees < -360 || decimalDegrees > 360) {
        decimalDegrees = fmod(decimalDegrees, 360);
    }

    // Преобразуем в радианы
    double radians = decimalDegrees * (PI / 180.0);
    return radians;
}

int main() {
    int degrees, minutes, seconds;

    // Ввод угла
    std::cout << "Введите угол (градусы, минуты, секунды): ";
    std::cin >> degrees >> minutes >> seconds;

    // Проверка корректности ввода минут и секунд
    if (minutes < 0 || minutes >= 60 || seconds < 0 || seconds >= 60) {
        std::cerr << "Ошибка: минуты должны быть от 0 до 59, секунды от 0 до 59." << std::endl;
        return 1;
    }

    // Преобразование и вывод результата
    double radians = degreesMinutesSecondsToRadians(degrees, minutes, seconds);
    std::cout << "Угол в радианах: " << radians << std::endl;

    return 0;
}
