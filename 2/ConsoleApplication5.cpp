﻿// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "RUS");
    // Переменные для ответов на вопросы
    std::string Vopr1, Vopr2, Vopr3, Vopr4, Vopr5, Vopr6, Vopr7;

    // Задаем вопросы
    std::cout << "1. Болит ли голова? (да/нет): ";
    std::cin >> Vopr1;

    std::cout << "2. Есть ли слабость? (да/нет): ";
    std::cin >> Vopr2;

    std::cout << "3. Бывают ли головокружения? (да/нет): ";
    std::cin >> Vopr3;

    std::cout << "4. Температура повышена? (да/нет): ";
    std::cin >> Vopr4;

    std::cout << "5. Боль в горле? (да/нет): ";
    std::cin >> Vopr5;

    std::cout << "6. Проблемы с дыханием? (да/нет): ";
    std::cin >> Vopr6;

    std::cout << "7. Бывают ли рвоты? (да/нет): ";
    std::cin >> Vopr7;

    // Анализ ответов и вывод результата
    if (Vopr1 == "да" || Vopr2 == "да" || Vopr3 == "да" || Vopr4 == "да" ||
        Vopr5 == "да" || Vopr6 == "да" || Vopr7 == "да") {
        std::cout << "БОЛЬНОЙ СКОРЕЕ ЖИВ, ЧЕМ МЕРТВ!" << std::endl;
    }
    else {
        std::cout << "БОЛЬНОЙ СКОРЕЕ МЕРТВ, ЧЕМ ЖИВ!" << std::endl;
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
