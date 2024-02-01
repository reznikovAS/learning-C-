﻿// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

bool isInArea(double x, double y, double a) {
    // Проверяем попадание в полуокружности
    if (y >= 0 && pow(x, 2) + pow(y, 2) <= pow(a, 2)) {
        return true;
    }
    if (y <= 0 && pow(x, 2) + pow(y, 2) <= pow(a, 2)) {
        return true;
    }

    // Проверяем попадание в область между прямыми линиями
    if (x >= 0 && y <= x && y >= 0 && y <= a) {
        return true;
    }
    if (x <= 0 && y >= x && y <= 0 && y >= -a) {
        return true;
    }

    // Если точка не попадает ни в одну из областей, возвращаем false
    return false;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double x, y, a;

    // Вводим параметр a
    std::cout << "Введите параметр a: ";
    std::cin >> a;

    // Вводим координаты точки (x, y)
    std::cout << "Введите координаты точки (x, y): ";
    std::cin >> x >> y;

    if (isInArea(x, y, a)) {
        std::cout << "Точка (" << x << ", " << y << ") находится внутри заданной области." << std::endl;
    }
    else {
        std::cout << "Точка (" << x << ", " << y << ") находится вне заданной области." << std::endl;
    }

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
