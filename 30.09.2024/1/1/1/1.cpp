﻿// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

double gradusToRadians(double gradus, double minuta, double sekunda) {
    // Преобразовать угол из градусов, минут и секунд в десятичные градусы
    double decimalGradus = gradus + minuta / 60 + sekunda / 3600;

    // Преобразовать десятичные градусы в радианы
    double radians = decimalGradus * 3.14 / 180;

    return radians;
}

int main() {
    //Кириллица в терминале
    setlocale(LC_ALL, "Russian");

    double gradus, minuta, sekunda;

    // Ввод угла в градусах, минутах и секундах
    cout << "Введите угол в градусах: ";
    cin >> gradus;
    cout << "Введите угол в минутах: ";
    cin >> minuta;
    cout << "Введите угол в секундах: ";
    cin >> sekunda;

    // Преобразовать угол в радианы
    double radians = gradusToRadians(gradus, minuta, sekunda);

    // Вывод результата
    cout << "Угол в радианах: " << radians << std::endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
