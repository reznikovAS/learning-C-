#include <iostream>
#include <cmath>
#include <clocale>
#include <cstdlib>
#include <string>

using namespace std;

// КР1
void task1_CR1() {
    double speed, distance;
    cout << "Введите скорость самолета (м/с): ";
    cin >> speed;
    cout << "Введите расстояние (м): ";
    cin >> distance;

    double timeInSeconds = distance / speed;
    double timeInHours = timeInSeconds / 3600;

    cout << "Время в секундах: " << timeInSeconds << endl;
    cout << "Время в часах: " << timeInHours << endl;
}
void task2_CR1() {
    double h, x, a;
    cout << "Введите высоту треугольника (h): ";
    cin >> h;
    cout << "Введите разницу между основанием и боковой стороной (x): ";
    cin >> x;
    cout << "Введите длину боковой стороны (a): ";
    cin >> a;

    double halfBase = sqrt(a*a - h*h);
    double base = 2 * halfBase + x;

    cout << "Основание треугольника: " << base << endl;
}
void task3_CR1() {
    double x, y, leftTopX, leftTopY, rightBottomX, rightBottomY;
    cout << "Введите координаты точки (x, y): ";
    cin >> x >> y;
    cout << "Введите координаты левой верхней вершины прямоугольника (x, y): ";
    cin >> leftTopX >> leftTopY;
    cout << "Введите координаты правой нижней вершины прямоугольника (x, y): ";
    cin >> rightBottomX >> rightBottomY;

    bool inside = (x > leftTopX && x < rightBottomX && y > rightBottomY && y < leftTopY);
    cout << boolalpha << inside << endl;
}
// КР2
void task1_CR2() {
    int birthYear;
    cout << "Введите ваш год рождения: ";
    cin >> birthYear;

    const int dragonYearCycle = 12;
    const int dragonBaseYear = 2000; // Год дракона
    int yearsUntilDragon = (dragonBaseYear - birthYear) % dragonYearCycle;
    if (yearsUntilDragon == 0) {
        cout << "БУДЬТЕ СЧАСТЛИВЫ ВЕСЬ ГОД!" << endl;
    }
    else {
        cout << "До следующего года дракона " << (dragonYearCycle - yearsUntilDragon) << " лет." << endl;
    }
}
void task2_CR2() {
    double totalDistance, speedBiker, speedHiker;
    cout << "Введите общее расстояние между А и В (км): ";
    cin >> totalDistance;
    cout << "Введите скорость велосипедиста (км/ч): ";
    cin >> speedBiker;
    cout << "Введите скорость путника (км/ч): ";
    cin >> speedHiker;

    double totalTime = totalDistance / (speedBiker + speedHiker); // общее время до встречи
    double distanceBiker = speedBiker * totalTime; // расстояние, пройденное велосипедистом

    cout << "Путники встретятся через " << totalTime << " часов." << endl;
    cout << "Место встречи находится на расстоянии " << distanceBiker << " км от пункта А." << endl;
}
void task3_CR2() {
    double x, y;
    cout << "Введите координаты точки A(x, y):\n";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    // Проверка попадания в область: x^2 + y^2 <= 1 (внутри или на окружности) и y <= x (ниже или на прямой y=x)
    if (x * x + y * y <= 1 && y <= x && x >= 0 && y >= 0) {
        cout << "Точка (" << x << ", " << y << ") попадает в заданную область." << endl;
    }
    else {
        cout << "Точка (" << x << ", " << y << ") не попадает в заданную область." << endl;
    }
}
// КР3
void task1_CR3() {
    float F, a, b, c, x;
    float x1, x2, step;

    cout << "Введите значение переменных a, b, c: ";
    cin >> a >> b >> c;
    cout << "Введите начальное и конечное значение x, а также шаг: ";
    cin >> x1 >> x2 >> step;

    for (x = x1; x <= x2; x += step) {
        if (c < 0 && a > 0) {
            F = -a * x * x - b;
        }
        else if (c > 0 && a == 0) {
            if (x != 0) { // проверка, чтобы избежать деления на ноль
                F = (2 * x - a) / (c * x);
            }
            else {
                cout << "Деление на ноль при x = " << x << endl;
                continue;
            }
        }
        else {
            if (b != 0) { // проверка, чтобы избежать деления на ноль
                F = -x / b;
            }
            else {
                cout << "Деление на ноль при b = " << b << endl;
                continue;
            }
        }
        cout << "При x = " << x << "Ответ: функция F равна" << F << endl;
    }
}
void task2_CR3() {
    int n;
    float sum_sqrt = 0;

    cout << "Введите n: ";
    cin >> n;

    for (int a = 1; a <= n; a++) {
        sum_sqrt += sqrt(3 * a);
    }

    cout << "Ответ: " << sum_sqrt << endl;
  
}
void task3_CR3() {
    int number;
    cout << "Введите число: ";
    cin >> number;

    int maxPowerOfTwo = 0; // Начальное значение степени двойки
    int tempNumber = number; // Временная переменная для операций деления

    // Пока число делится на 2, увеличиваем степень и делим число
    while (tempNumber % 2 == 0 && tempNumber != 0) {
        maxPowerOfTwo++;
        tempNumber /= 2;
    }

    cout << "Наибольшая степень двойки, на которую делится число " << number << ", это 2^" << maxPowerOfTwo << endl;



}
void task4_CR3() {
    int n;
    cout << "Введите натуральное число n: ";
    cin >> n;

    // Перебираем числа от 1 до n-1
    for (int A = 1; A < n; A++) {
        // Преобразуем A и его квадрат в строки
        string square = to_string(A * A);
        string number = to_string(A);

        // Проверяем, оканчивается ли квадрат на A
        if (square.size() >= number.size()) {
            // Сравниваем последние цифры квадрата с A
            if (square.substr(square.size() - number.size()) == number) {
                cout << A << " - " << A * A << endl;
            }
        }
    }
    //Если вводим 25  числа 1, 5 и 6 являются такими числами меньше 25, квадраты которых оканчиваются на сами эти числа
}
void showMenu() {
    cout << "Контрольная работа 1:" << endl;
    cout << "1. Задача 1 контрольной работы 1 Расчет времени полета самолета" << endl;
    cout << "2. Задача 2 контрольной работы 1 Расчет основания равнобедренного треугольника" << endl;
    cout << "3. Задача 3 контрольной работы 1 Проверка положения точки относительно прямоугольника" << endl;
    cout << "Контрольная работа 2:" << endl;
    cout << "4. Задача 1 контрольной работы 2 2000 год – год дракона" << endl;
    cout << "5. Задача 2 контрольной работы 2 Встреча" << endl;
    cout << "6. Задача 3 контрольной работы 2 График" << endl;
    cout << "Контрольная работа 3:" << endl;
    cout << "7. Задача 1 контрольной работы 3 " << endl;
    cout << "8. Задача 2 контрольной работы 3 " << endl;
    cout << "9. Задача 3 контрольной работы 3 " << endl;
    cout << "10. Задача 4 контрольной работы 3 " << endl;
    cout << "0. Выход" << endl;
}

int main() {
    setlocale(LC_ALL, "Rus");
    while (true) {
        showMenu();

        int choice;
        cout << "Введите номер задачи: ";
        cin >> choice;

        switch (choice) {
        case 1:
            task1_CR1();
            break;
        case 2:
            task2_CR1();
            break;
        case 3:
            task3_CR1();
            break;
        case 4:
            task1_CR2();
            break;
        case 5:
            task2_CR2();
            break;
        case 6:
            task3_CR2();
            break;
        case 7:
            task1_CR3();
            break;
        case 8:
            task2_CR3();
            break;
        case 9:
            task3_CR3();
            break;
        case 10:
            task4_CR3();
            break;
        case 0:
            return 0; // Выход из программы
        default:
            cout << "Неверный выбор, попробуйте еще раз." << endl;
        }
    }

    return 0;
}