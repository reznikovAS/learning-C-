// ConsoleApplication20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <cstdlib>  // Для использования функции rand
#include <ctime>    // Для установки начального значения генератора случайных чисел

void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "RUS");

    // Ввод размеров матрицы M и N
    int M, N;

    std::cout << "Введите количество строк M: ";
    std::cin >> M;

    std::cout << "Введите количество столбцов N: ";
    std::cin >> N;

    // Создание матрицы
    std::vector<std::vector<int>> matrix(M, std::vector<int>(N));

    // Вопрос пользователю
    std::cout << "Выберите способ заполнения матрицы:" << std::endl;
    std::cout << "1. Ввести элементы вручную" << std::endl;
    std::cout << "2. Сгенерировать случайные числа" << std::endl;

    int choice;
    std::cin >> choice;

    if (choice == 1) {
        // Ручной ввод элементов матрицы
        std::cout << "Введите элементы матрицы:" << std::endl;
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                std::cin >> matrix[i][j];
            }
        }
    }
    else if (choice == 2) {
        // Генерация случайных чисел в интервале от -10 до 10
        std::srand(std::time(0)); // Установка начального значения для генератора случайных чисел

        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                matrix[i][j] = rand() % 21 - 10;  // Генерация случайных чисел от -10 до 10
            }
        }
    }
    else {
        // Некорректный выбор, завершаем программу
        std::cout << "Некорректный выбор. Программа завершена." << std::endl;
        return 1;
    }

    // Вывод изначальной матрицы
    std::cout << "Изначальная матрица:" << std::endl;
    printMatrix(matrix);

    // Поиск минимального и максимального элементов
    int minElement = matrix[0][0];
    int maxElement = matrix[0][0];
    int minColumn = 0;
    int maxColumn = 0;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
                minColumn = j;
            }

            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxColumn = j;
            }
        }
    }

    // Обмен столбцов
    for (int i = 0; i < M; ++i) {
        int temp = matrix[i][minColumn];
        matrix[i][minColumn] = matrix[i][maxColumn];
        matrix[i][maxColumn] = temp;
    }

    // Вывод обновленной матрицы
    std::cout << "Обновленная матрица:" << std::endl;
    printMatrix(matrix);

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
