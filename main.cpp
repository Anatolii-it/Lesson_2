#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double zm = 200; //зарплата менеджера
    double p1 = 0;   //зарплата з відсотком
    double p2 = 0;
    double p3 = 0;
    double m1 = 0;   //рівень продажу
    double m2 = 0;
    double m3 = 0;
    double happy = 0; //той хто отримає премію

    cout << "Введіть рівень продаж Ігоря - ";
    cin >> m1;
    if (m1 <= 500) {
        p1 = zm * 0.03 + zm;
    }
    else if (m1 <= 1000) {
        p1 = zm * 0.05 + zm;
    }
    else if (m1 > 1000) {
        p1 = zm * 0.08 + zm;
    }
    cout << "Введіть рівень продаж Діми - ";
    cin >> m2;
    if (m2 <= 500) {
        p2 = zm * 0.03 + zm;
    }
    else if (m2 <= 1000) {
        p2 = zm * 0.05 + zm;
    }
    else if (m2 > 1000) {
        p2 = zm * 0.08 + zm;
    }
    cout << "Введіть рівень продаж Олега - ";
    cin >> m3;
    if (m3 <= 500) {
        p3 = zm * 0.03 + zm;
    }
    else if (m3 <= 1000) {
        p3 = zm * 0.05 + zm;
    }
    else if (m3 > 1000) {
        p3 = zm * 0.08 + zm;
    }

    happy = p1;
    if (p2 > happy && p2 > p3){
        happy = p2;
    }
    else if (p3 > happy) {
        happy = p3;
    }
    
    cout << endl;
    
    
    if ((happy > p2)&&(happy>p3)) {
        cout << "Ігор отримає  премію + 200 ітого " << p1 + 200 << " $" << endl;
        cout << "Діма отримає " << p2 << endl;
        cout << "Олег отримає " << p3 << endl;
    }
    else {
        
    }
   

    
    if ((happy > p1) && (happy > p3)) {
        cout << "Діма отримає премію +200 ітого " << p2 + 200 << " $" << endl;
        cout << "Ігор отримає " << p1 << endl;
        cout << "Олег отримає " << p3 << endl;
    }
    else {
        
    }
    
    if ((happy > p1) && (happy > p2)) {
        cout << "Олег отримає премію +200 ітого " << p3 + 200 << " $" << endl;
        cout << "Ігор отримає " << p1 << endl;
        cout << "Діма отримає " << p2 << endl;
    }
    else {
        
    }
    if ((happy == p1 && happy == p2) || (happy == p1 && happy == p3) || (happy == p2 && happy == p3)) {
        cout << "Немає лідера продаж !!!"  << endl;
        cout << "Ігор отримає - " << p1 << "$" << endl;
        cout << "Діма отримає - " << p2 << "$" << endl;
        cout << "Олег отримає - " << p3 << "$" << endl;
    }
    
    

   


    _getch();
    return 0;
}