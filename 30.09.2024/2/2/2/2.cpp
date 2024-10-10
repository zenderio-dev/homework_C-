#include <iostream>
#include <cmath>

using namespace std;

void radiansToGradus(double radians, double& gradus, double& minuta, double& sekunda) {
    // Преобразовать угол из радианов в десятичные градусы
    double decimalGradus = radians * 180 / 3.14;

    // Преобразовать десятичные градусы в градусы, минуты и секунды
    gradus = floor(decimalGradus);
    minuta = floor((decimalGradus - gradus) * 60);
    sekunda = round((decimalGradus - gradus - minuta / 60) * 3600);
}

int main() {
    //Кириллица в терминале
    setlocale(LC_ALL, "Russian");

    double radians;

    // Ввод угла в радианах
    cout << "Введите угол в радианах: ";
    cin >> radians;

    // Преобразовать угол в градусы, минуты и секунды
    double gradus, minuta, sekunda;
    radiansToGradus(radians, gradus, minuta, sekunda);

    // Вывод результата
    cout << "Угол в градусах: " << gradus << endl;
    cout << "Угол в минутах: " << minuta << endl;
    cout << "Угол в секундах: " << sekunda << endl;

    return 0;
}
