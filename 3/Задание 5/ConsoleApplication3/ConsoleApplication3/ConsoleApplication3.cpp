﻿// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

double calculatePowerSeries(double a, double x, double epsilon) {
    double result = 1.0;
    double term = 1.0;
    int n = 1;

    while (fabs(term) >= epsilon) {
        term *= (x * log(a)) / n;
        result += term;
        n++;
    }

    return result;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a, x, epsilon;

    // Ввод параметров a, x и epsilon
    std::cout << "Введите значение a: ";
    std::cin >> a;

    std::cout << "Введите значение x: ";
    std::cin >> x;

    std::cout << "Введите значение epsilon (0 < epsilon < 1): ";
    std::cin >> epsilon;

    // Проверка корректности ввода epsilon
    if (epsilon <= 0 || epsilon >= 1) {
        std::cerr << "Ошибка: epsilon должен быть в пределах (0, 1).\n";
        return 1;
    }

    // Вычисление a^x с точностью epsilon
    double result = calculatePowerSeries(a, x, epsilon);

    // Вывод результата
    std::cout << "Результат выражения " << a << "^" << x << " с точностью " << epsilon << ": " << result << std::endl;

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
