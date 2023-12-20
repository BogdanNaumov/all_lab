#include <iostream>
#include<Windows.h>
#include<conio.h>
#include<stdlib.h>
#include "MyQueue.h"
HANDLE hConsole;
//cout << "\n1. �������� ������� � �������\n";
//cout << "2. ������� ������� �� �������\n";
//cout << "3. ������ �������\n";
//cout << "4. ������� ���������� �������\n";
//cout << "5. �����\n";

int main()
{
    setlocale(LC_ALL, "Russian");
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 2);
    int tmp_size = 0, tmp_num = 0, tmp_element = 0;
    cout << "����� ������ ������ ������� �������: ";
    cin >> tmp_size;
    if (tmp_size < 1 || tmp_size>100) { throw invalid_argument("������������ �������� �������!"); }
    system("cls");
    cout << "��������� ������� �������� �������: ";
    TQueue<int> tmp(tmp_size);
    cin >> tmp;
    system("cls");
    while (tmp_num != 5) 
    {
        cout << "    ������ � ��������" << endl;
        SetConsoleTextAttribute(hConsole, 3);
        cout << "1 - �������� ������� � �������" <<endl;
        cout << "2 - ������� ������� �� �������" <<endl;
        cout << "3 - ������ �������" <<endl;
        cout << "4 - ������� ���������� �������" <<endl;
        cout << "5 - ��������� ��������" <<endl;
        cin >> tmp_num;
        switch (tmp_num)
        {
        case 1:
            system("cls");
            cout << "������� �������: ";
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
            cout << "������ ����� �������: " << tmp.GetCount() << " ���������" << endl;
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            cout << "���� �������� �������: " << tmp << endl;
            system("pause");
            system("cls");
            break;
        default:
            break;
        }
    }

    
}
