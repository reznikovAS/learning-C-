﻿// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "RUS");
    // Заданные данные
    double a = 5.0; // сторона ромба
    double L = 6.0; // меньшая диагональ
    double m = 8.0; // угол в градусах

    // Переводим угол из градусов в радианы
    double mRadians = m * M_PI / 180.0;

    // Вычисляем большую диагональ по тригонометрической формуле
    double D1 = sqrt(pow(a, 2) + pow(L, 2) - 2 * a * L * cos(mRadians));

    // Выводим результат
    std::cout << "Большая диагональ ромба: " << D1 << std::endl;

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
