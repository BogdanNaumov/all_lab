#include <iostream>
#include<Windows.h>
#include<conio.h>
#include<stdlib.h>
#include "MyQueue.h"
HANDLE hConsole;
//cout << "\n1. Добавить элемент в очередь\n";
//cout << "2. Извлечь элемент из очереди\n";
//cout << "3. Размер очереди\n";
//cout << "4. Вывести содержимое очереди\n";
//cout << "5. Выход\n";

int main()
{
    setlocale(LC_ALL, "Russian");
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 2);
    int tmp_size = 0, tmp_num = 0, tmp_element = 0;
    cout << "Какой длинны хотите создать очередь: ";
    cin >> tmp_size;
    if (tmp_size < 1 || tmp_size>100) { throw invalid_argument("Некорректное значение размера!"); }
    system("cls");
    cout << "Поочерёдно введите элементы очереди: ";
    TQueue<int> tmp(tmp_size);
    cin >> tmp;
    system("cls");
    while (tmp_num != 5) 
    {
        cout << "    Работа с очередью" << endl;
        SetConsoleTextAttribute(hConsole, 3);
        cout << "1 - Добавить элемент в очередь" <<endl;
        cout << "2 - Извлечь элемент из очереди" <<endl;
        cout << "3 - Размер очереди" <<endl;
        cout << "4 - Вывести содержимое очереди" <<endl;
        cout << "5 - Закончить просмотр" <<endl;
        cin >> tmp_num;
        switch (tmp_num)
        {
        case 1:
            system("cls");
            cout << "Введите элемент: ";
            cin >> tmp_element;
            tmp.Push(tmp_element);
            system("cls");
            break;
        case 2:
            system("cls");
            tmp.Get();
            system("cls");
            break;
        case 3:
            system("cls");
            cout << "Размер вашей очереди: " << tmp.GetCount() << " элементов" << endl;
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            cout << "Ваши элементы очереди: " << tmp << endl;
            system("pause");
            system("cls");
            break;
        default:
            break;
        }
    }

    
}
