#include <iostream>
#include <cmath>
#include <clocale>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm> // Для std::sort
#include <map>       // Для std::map
#include <numeric>   // Для std::accumulate
#include <ctime>
#include <iomanip>


using namespace std;
// ANSI escape codes для изменения цвета текста
const string GREEN_TEXT = "\033[32m";
const string RESET_COLOR = "\033[0m";
// КР1
void task1_CR1() {
    double speed, distance;
    cout << "Введите скорость самолета (м/с): ";
    cin >> speed;
    cout << "Введите расстояние (м): ";
    cin >> distance;

    double timeInSeconds = distance / speed;
    double timeInHours = timeInSeconds / 3600;

    cout << GREEN_TEXT; // Установка зелёного цвета текста
    cout << "Время в секундах: " << timeInSeconds << endl;
    cout << "Время в часах: " << timeInHours << endl;
    cout << RESET_COLOR; // Возврат к стандартному цвету текста
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
    cout << GREEN_TEXT; // Установка зелёного цвета текста
    cout << "Основание треугольника: " << base << endl;
    cout << RESET_COLOR; // Возврат к стандартному цвету текста
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
    cout << GREEN_TEXT; // Установка зелёного цвета текста
    cout << boolalpha << inside << endl; //выводим true либо false
    cout << RESET_COLOR; // Возврат к стандартному цвету текста
}
// КР2
void task1_CR2() {
    int god;
    cout << "Введите ваш год рождения: " << endl;
    cin >> god;
    int temp = abs((god - 2000)) % 12;
     cout << GREEN_TEXT;
    if (temp == 0) cout << "БУДЬТЕ СЧАСТЛИВЫ ВЕСЬ ГОД!" << endl;
    else {

        cout << "До следующего года дракона: "<< endl;
        if (god > 2000)
        {
            cout << 12 - temp << endl;
        }
    }
    cout << RESET_COLOR;
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
    cout << GREEN_TEXT; // Установка зелёного цвета текста
    cout << "Путники встретятся через " << totalTime << " часов." << endl;
    cout << "Место встречи находится на расстоянии " << distanceBiker << " км от пункта А." << endl;
    cout << RESET_COLOR; // Возврат к стандартному цвету текста
}
void task3_CR2() {
    double x, y;
    cout << "Введите координаты точки A(x, y):\n";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    // Проверка попадания в область: x^2 + y^2 <= 1 (внутри или на окружности) и y <= x (ниже или на прямой y=x)
    if ((x * x + y * y <= 1) && ((x >= 0 && y <= x) || (x < 0 && y <= x))) {
        cout << GREEN_TEXT; // Установка зелёного цвета текста
        cout << "Точка (" << x << ", " << y << ") попадает в заданную область." << endl;
        cout << RESET_COLOR; // Возврат к стандартному цвету текста
    }
    else {
        cout << GREEN_TEXT; // Установка зелёного цвета текста
        cout << "Точка (" << x << ", " << y << ") не попадает в заданную область." << endl;
        cout << RESET_COLOR; // Возврат к стандартному цвету текста
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
        cout << GREEN_TEXT; // Установка зелёного цвета текста
        cout << "При x = " << x << "Ответ: функция F равна" << F << endl;
        cout << RESET_COLOR; // Возврат к стандартному цвету текста
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
    cout << GREEN_TEXT; // Установка зелёного цвета текста
    cout << "Ответ: " << sum_sqrt << endl;
    cout << RESET_COLOR; // Возврат к стандартному цвету текста
  
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
    cout << GREEN_TEXT; // Установка зелёного цвета текста
    cout << "Наибольшая степень двойки, на которую делится число " << number << ", это 2^" << maxPowerOfTwo << endl;
    cout << RESET_COLOR; // Возврат к стандартному цвету текста


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
                cout << GREEN_TEXT; // Установка зелёного цвета текста
                cout << A << " - " << A * A << endl;
                cout << RESET_COLOR; // Возврат к стандартному цвету текста
            }
        }
    }
    //Если вводим 25  числа 1, 5 и 6 являются такими числами меньше 25, квадраты которых оканчиваются на сами эти числа
}
// КР4
// Функция для заполнения массива случайными числами
void fillArray(vector<double>& array) {
    int n, method;
    cout << "Введите размер массива N: ";
    cin >> n;
    array.resize(n);

    cout << "Выберите метод заполнения (1 - ручной, 2 - автоматический): ";
    cin >> method;

    if (method == 1) {
        cout << "Введите элементы массива: ";
        for (int i = 0; i < n; ++i) {
            cin >> array[i];
        }
    }
    else {
        srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел
        for (int i = 0; i < n; ++i) {
            array[i] = -10 + rand() % 21; // Случайное число от -10 до 10
        }
    }
}
// Задача 2 КР4
void task2_CR4(const vector<double>& X) {
    int zeroCount = 0;
    double sumAfterMin = 0;
    bool minFound = false;
    double minElement = numeric_limits<double>::max();

    for (double element : X) {
        if (element == 0) {
            zeroCount++;
        }

        if (minFound) {
            sumAfterMin += element;
        }

        if (element < minElement) {
            minElement = element;
            minFound = true;
            sumAfterMin = 0;
        }
    }
    cout << GREEN_TEXT; // Установка зелёного цвета текста
    cout << "Количество элементов массива, равных 0: " << zeroCount << endl;
    cout << "Сумма элементов массива, расположенных после минимального элемента: " << sumAfterMin << endl;
    cout << RESET_COLOR; // Возврат к стандартному цвету текста
}

// Задача 3 КР4
void task3_CR4(vector<double>& X) {
    sort(X.begin(), X.end(), [](double a, double b) {
        return abs(a) < abs(b);
        });
    cout << GREEN_TEXT; // Установка зелёного цвета текста
    cout << "Элементы массива, упорядоченные по возрастанию модулей элементов: ";
    for (double element : X) {
        cout << element << " ";
    }
    cout << endl;
    cout << RESET_COLOR; // Возврат к стандартному цвету текста
}

// Задача 4 КР4
void task4_CR4(const vector<double>& X, const vector<double>& Y) {
    map<double, vector<double>> functionValues;

    for (size_t i = 0; i < X.size(); ++i) {
        functionValues[X[i]].push_back(Y[i]);
    }

    cout << "Таблица значений функции, упорядоченная по возрастанию аргумента:" << endl;
    for (const auto& pair : functionValues) {
        double avg = accumulate(pair.second.begin(), pair.second.end(), 0.0) / pair.second.size();
        cout << GREEN_TEXT; // Установка зелёного цвета текста
        cout << "Аргумент: " << pair.first << ", Среднее значение функции: " << avg << endl;
        cout << RESET_COLOR; // Возврат к стандартному цвету текста
    }
}
// Задача 1 КР4
void task1_CR4() {
    vector<double> X, Y;
    fillArray(X); // Заполнение массива X

    // Вывод исходного массива X
    cout << GREEN_TEXT; // Установка зелёного цвета текста
    cout << "Исходный массив X: ";
    cout << RESET_COLOR; // Возврат к стандартному цвету текста
    for (double x : X) {
        cout << x << " ";
    }
    cout << endl;

    // Вычисляем значения функции для массива Y
    for (double x : X) {
        Y.push_back(x * x); //квадрат x
    }

    // Вывод массива Y
    cout << GREEN_TEXT; // Установка зелёного цвета текста
    cout << "Массив Y (результаты функции): ";
    cout << RESET_COLOR; // Возврат к стандартному цвету текста
    for (double y : Y) {
        cout << y << " ";
    }
    cout << endl;

    // Выполнение задач 2-4 КР4
    task2_CR4(X);
    task3_CR4(X);
    task4_CR4(X, Y);
}
// КР5
void fillArray(vector<vector<int>>& array, int M, int N) {
    int method;
    cout << "Выберите метод заполнения (1 - ручной, 2 - автоматический): ";
    cin >> method;

    if (method == 1) {
        cout << "Введите элементы массива:" << endl;
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> array[i][j];
            }
        }
    }
    else {
        srand(static_cast<unsigned int>(time(0)));
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                array[i][j] = -10 + rand() % 21;
            }
        }
    }
}

void printArray(const vector<vector<int>>& array) {
    for (const auto& row : array) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }
}
void task1_CR5(const vector<vector<int>>& array) {
    int lastPositiveRow = 0;

    for (int i = 0; i < array.size(); ++i) {
        bool allPositive = true;
        for (int j = 0; j < array[i].size(); ++j) {
            if (array[i][j] <= 0) {
                allPositive = false;
                break;
            }
        }
        if (allPositive) {
            lastPositiveRow = i + 1;
        }
    }
    cout << GREEN_TEXT; // Установка зелёного цвета текста
    cout << "Номер последней полностью положительной строки: " << lastPositiveRow << endl;
    cout << RESET_COLOR; // Возврат к стандартному цвету текста
}
void task2_CR5(vector<vector<int>>& array) {
    int M = array.size(); // Так как матрица квадратная, количество строк равно количеству столбцов.

    // Проходим по всей матрице и меняем местами элементы симметрично относительно вертикальной оси.
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M / 2; ++j) {
            swap(array[i][j], array[i][M - j - 1]);
        }
    }

    cout << GREEN_TEXT << "Матрица после зеркального отражения:" << RESET_COLOR << endl;
    printArray(array);
}

void task3_CR5(vector<vector<int>>& array, int M, int N, int k) {
    array.insert(array.begin() + k, vector<int>(N, 0));

    cout << GREEN_TEXT << "Матрица после вставки строки из нулей после строки " << k << ":" << RESET_COLOR << endl;
    printArray(array);
}

void task4_CR5(vector<vector<int>>& array) {
    int M = array.size();
    int N = array[0].size();
    vector<vector<int>> newArray(M, vector<int>(N, INT_MIN));

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            // Ищем максимальный элемент в подматрице от (0,0) до (i,j)
            for (int sub_i = 0; sub_i <= i; ++sub_i) {
                for (int sub_j = 0; sub_j <= j; ++sub_j) {
                    newArray[i][j] = max(newArray[i][j], array[sub_i][sub_j]);
                }
            }
        }
    }

    cout << GREEN_TEXT << "Матрица после замены каждого элемента на максимальный среди элементов подматрицы:" << RESET_COLOR << endl;
    printArray(newArray);
}
// КР6

// Глобальная переменная для размера массива
int Size = 3; 

// Структура для хранения информации о программе
struct ProgramInfo {
    string name;
    int linesOfCode;
    float timeOnSCIChallenge;
    float timeOnSCIIndy;
};

// Функция для печати заголовка таблицы
void printHeader() {
    cout << " ------------------------------------------------------------------------------------------------------------" << endl;
    cout << " |            Время выполнения некоторых программ, которые применяют параллельные  алгоритмы                |" << endl;
    cout << " ------------------------------------------------------------------------------------------------------------" << endl;
    cout << " | Название программы | Кол-во строк кода | Время исп. на SCI Challenge (сек) | Время исп. на SCI Indy (сек)|" << endl;
    cout << " ------------------------------------------------------------------------------------------------------------" << endl;
}

// Функция для печати строки таблицы
void printRow(const ProgramInfo& program) {
    cout << " | " << setw(18) << left << program.name
        << " | " << setw(17) << program.linesOfCode
        << " | " << setw(33) << program.timeOnSCIChallenge
        << " | " << setw(27) << program.timeOnSCIIndy
        << " | " << endl;
    cout << " ------------------------------------------------------------------------------------------------------------" << endl;
}

// Функция для вывода всей таблицы
void printTable(const vector<ProgramInfo>& programs) {
    system("CLS");  // Очистка терминала
    printHeader();  // Печать заголовка таблицы
    for (const auto& program : programs) {
        printRow(program);
    }
}

// КР6
void task1_CR6() {
    vector<ProgramInfo> programs = {
       {"OCEAN", 1917, 8.70f, 18.2f},
       {"DYFESM", 3386, 6.95f, 22.0f},
       {"TRFD", 417, 1.05f, 2.98f}
    };

    int action = 999;
    printTable(programs); // Печать начальной таблицы

    while (action != 0) {
        cout << "Выберите действие над таблицей:" << '\n';
        cout << "Введите 1, чтобы добавить запись" << '\n';
        cout << "Введите 2, чтобы изменить запись" << '\n';
        cout << "Введите 3, чтобы удалить запись" << '\n';
        cout << "Введите 0, чтобы выйти" << '\n';
        cin >> action;

        switch (action) {
        case 1: { // Добавление записи
            ProgramInfo newEntry;
            cout << "Введите название программы: ";
            cin >> newEntry.name;
            cout << "Введите количество строк кода: ";
            cin >> newEntry.linesOfCode;
            cout << "Введите время исполнения на SCI Challenge: ";
            cin >> newEntry.timeOnSCIChallenge;
            cout << "Введите время исполнения на SCI Indy: ";
            cin >> newEntry.timeOnSCIIndy;
            programs.push_back(newEntry);
            break;
        }
        case 2: { // Изменение записи
            int index;
            cout << "Введите индекс записи для изменения: ";
            cin >> index;
            if (index >= 1 && index <= programs.size()) {
                ProgramInfo& entry = programs[index - 1];
                cout << "Текущие данные записи [" << index << "]: " << entry.name << " " << entry.linesOfCode << " " << entry.timeOnSCIChallenge << " " << entry.timeOnSCIIndy << '\n';
                cout << "Введите новое название программы: ";
                cin >> entry.name;
                cout << "Введите новое количество строк кода: ";
                cin >> entry.linesOfCode;
                cout << "Введите новое время исполнения на SCI Challenge: ";
                cin >> entry.timeOnSCIChallenge;
                cout << "Введите новое время исполнения на SCI Indy: ";
                cin >> entry.timeOnSCIIndy;
            }
            else {
                cout << "Некорректный индекс!\n";
            }
            break;
        }
        case 3: { // Удаление записи
            int index;
            cout << "Введите индекс записи для удаления: ";
            cin >> index;
            if (index >= 1 && index <= programs.size()) {
                programs.erase(programs.begin() + index - 1);
            }
            else {
                cout << "Некорректный индекс!\n";
            }
            break;
        }
        }
        printTable(programs); // Печать обновленной таблицы после каждого действия
    }
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
    cout << "7. Задача 1 контрольной работы 3 Расчет значения функции F на интервале от начального значения " << endl;
    cout << "8. Задача 2 контрольной работы 3 Вычисление для заданного n указанного выражения. " << endl;
    cout << "9. Задача 3 контрольной работы 3 Наибольшая степень двойки, на которую делится заданное число." << endl;
    cout << "10. Задача 4 контрольной работы 3 Дано натуральное число n. Среди чисел A меньших его найти все такие, квадрат которых оканчивается на это число A" << endl;
    cout << "Контрольная работа 4:" << endl;
    cout << "11. контрольня работа 4 (Сразу 4 задания с одного массива) " << endl;
    cout << "Контрольная работа 5 Работа с матрицами:" << endl;
    cout << "12. Задача 1 контрольной работы 5 Номер последней строки, содержащей только положительные элементы матрицы" << endl;
    cout << "13. Задача 2 контрольной работы 5 Отразить элементы относительно вертикальной оси симметрии матрицы " << endl;
    cout << "14. Задача 3 контрольной работы 5 После строки матрицы с номером k вставить строку из нулей " << endl;
    cout << "Контрольная работа 6:" << endl;
    cout << "16. контрольня работа 6 Работа с таблицей  " << endl;
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
        case 11:
            task1_CR4();
            break;
        case 12: {
            int M, N;
            cout << "Введите размеры массива M и N: ";
            cin >> M >> N;
            vector<vector<int>> array(M, vector<int>(N));

            fillArray(array, M, N);
            task1_CR5(array);
            break;
        }
        case 13: {
            int M, N;
            cout << "Введите размеры массива M и N: ";
            cin >> M >> N;
            vector<vector<int>> array(M, vector<int>(N));
            fillArray(array, M, N); 
            task2_CR5(array);
            break;
        }
        case 14: {
            int M, N, k;
            cout << "Введите размеры массива M и N: ";
            cin >> M >> N;
            cout << "Введите номер строки k для вставки строки из нулей: ";
            cin >> k;
            vector<vector<int>> array(M, vector<int>(N));
            fillArray(array, M, N); 
            task3_CR5(array, M, N, k);
            break;
        }
        case 16:
            task1_CR6();
            break;
        case 0:
            return 0; 
        default:
            cout << "Неверный выбор, попробуйте еще раз." << endl;
        }
    }

    return 0;
}