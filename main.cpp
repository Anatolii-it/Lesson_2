#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A = 0;
    cout << "������ ����� ���������� �����" << endl;
    cin >> A;
    if (A < 1000 || A > 9999) {
        cout << "����� �� ������������";
        return 0;
    }
    int x0 = (A / 1000) % 10;
    int x1 = (A / 100) % 10;
    int x2 = (A / 10) % 10;
    int x3 = A   % 10;
    cout << endl;
    cout << " ���� "<<A << endl;

    cout <<" ����� " << x1 << x0 << x3 << x2;

    _getch();
    return 0;
}
