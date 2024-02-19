#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A = 0;
    cout << "Ââåä³òü ÷èñëî äëÿ ïåðåâ³ðêè" << endl;
    cin >> A;
    if (A < 100000 || A > 999999) {
        cout << "÷èñëî íå º øåñòèçíà÷íèì";
        return 0;
    }
    int x0 = (A / 100000) % 10;
    int x1 = (A / 10000) % 10;
    int x2 = (A / 1000) % 10;
    int x3 = (A / 100) % 10;
    int x4 = (A / 10) % 10;
    int x5 = A % 10;

    if (x0 + x1 + x2 == x3 + x4 + x5) {
        cout << " число " << A << " ùàñëèâå";
    }
    else {
        cout << " ×èñëî " << A << " íå ùàñëèâå";
    }

    _getch();
    return 0;
}
