#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double zm = 200; //�������� ���������
    double p1 = 0;   //�������� � ��������
    double p2 = 0;
    double p3 = 0;
    double m1 = 0;   //����� �������
    double m2 = 0;
    double m3 = 0;
    double happy = 0; //��� ��� ������ �����

    cout << "������ ����� ������ ����� - ";
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
    cout << "������ ����� ������ ĳ�� - ";
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
    cout << "������ ����� ������ ����� - ";
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
        cout << "���� ������  ����� + 200 ����� " << p1 + 200 << " $" << endl;
        cout << "ĳ�� ������ " << p2 << endl;
        cout << "���� ������ " << p3 << endl;
    }
    else {
        
    }
   

    
    if ((happy > p1) && (happy > p3)) {
        cout << "ĳ�� ������ ����� +200 ����� " << p2 + 200 << " $" << endl;
        cout << "���� ������ " << p1 << endl;
        cout << "���� ������ " << p3 << endl;
    }
    else {
        
    }
    
    if ((happy > p1) && (happy > p2)) {
        cout << "���� ������ ����� +200 ����� " << p3 + 200 << " $" << endl;
        cout << "���� ������ " << p1 << endl;
        cout << "ĳ�� ������ " << p2 << endl;
    }
    else {
        
    }
    if ((happy == p1 && happy == p2) || (happy == p1 && happy == p3) || (happy == p2 && happy == p3)) {
        cout << "���� ����� ������ !!!"  << endl;
        cout << "���� ������ - " << p1 << "$" << endl;
        cout << "ĳ�� ������ - " << p2 << "$" << endl;
        cout << "���� ������ - " << p3 << "$" << endl;
    }
    
    

   


    _getch();
    return 0;
}