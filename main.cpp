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

    cout << "Вантажний літак має пролетіти з вантажем із пункту А в пункт С через пункт В " << endl;
    cout << "розрахувати яка мінімальну кількість палива необхідна для дозаправки літака в пункті В " << endl;

    cout << "Введіть вагу вантажу" << endl;
    cin >> weight;
    if (weight > 2000)
    {
        cout << "Літак не може підняти вантаж більше 2000 кг. Політ неможливий." << endl;
        return 0;
    }
    cout << "Введіть відстань А-В" << endl;
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
        cout << "Літак не зможе пролетіти відстань від пункту А до пункту В без дозаправки." << endl;
        return 0;
    }

    cout << "Введіть BC" << endl;
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
        cout << "Літак не зможе пролетіти відстань від пункту B до пункту C без дозаправки." << endl;
        return 0;
    }

    double total = L + LL;


    if (total > max_fuel) {
        cout << "Необхідно дозаправити літак в пункті В: " << total - max_fuel << " л" << endl;
    }
    else {
        cout << "Літак може подолати відстань без дозаправки в пункті В." << endl;
    }



    _getch();
    return 0;
}