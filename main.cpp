#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int AB = 0;
    int BC = 0;
    int L = 0;
    int weight = 0;

    cout << "��������� ���� �� �������� � �������� �� ������ � � ����� � ����� ����� � " << endl;
    cout << "����������� ��� �������� ������� ������ ��������� ��� ���������� ����� � ����� � " << endl;

    cout << "������ ���� �������" << endl;
    cin >> weight;
    if (weight > 2000)
    {
        cout << "˳��� �� ���� ������ ������ ����� 2000 ��. ���� ����������." << endl;
        return 0;
    }
    cout << "������ ������� �-�" << endl;
    cin >> AB;
    if (weight <= 500) {
        L = AB * 1;
    }
    else if (weight <= 1000) {
        L = AB * 4;
    }
    else if (weight <= 1500) {
        L = AB * 7;
    }
    else if (weight <= 2000) {
        L = AB * 9;
    }


    double max_fuel = 300;
    if (L > max_fuel) {
        cout << "˳��� �� ����� �������� ������� �� ������ � �� ������ � ��� ����������." << endl;
        return 0;
    }

    cout << "������ BC" << endl;
    cin >> BC;

    double LL = 0;
    if (weight <= 500) {
        LL = BC * 1;
    }
    else if (weight <= 1000) {
        LL = BC * 4;
    }
    else if (weight <= 1500) {
        LL = BC * 7;
    }
    else if (weight <= 2000) {
        LL = BC * 9;
    }

    if (LL > max_fuel) {
        cout << "˳��� �� ����� �������� ������� �� ������ B �� ������ C ��� ����������." << endl;
        return 0;
    }

    double total = L + LL;


    if (total > max_fuel) {
        cout << "��������� ����������� ���� � ����� �: " << total - max_fuel << " �" << endl;
    }
    else {
        cout << "˳��� ���� �������� ������� ��� ���������� � ����� �." << endl;
    }



    _getch();
    return 0;
}