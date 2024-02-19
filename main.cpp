#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A[7] ;
    cout << "введіть число четезначне число" << endl;
    
    for (size_t i = 0; i < 7; i++)
    {
        cin >> A[i];
        cout <<"ход " << i+1 <<endl;
    }
    int max = A[0];
    for (size_t i = 1; i < 7; i++)
    {
        if (A[i] > max) {
            max = A[i];
        }
    }
    cout << " максимальне число " << max;
    

    _getch();
    return 0;
}
