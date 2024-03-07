#include <iostream>
using namespace std;

int main() {
	const int size = 5;
    int* arr1 = new int[size] {1, 2, 3, 4, 5};
    int* arr2 = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        *(arr2 + i) = *(arr1);
        cout << *(arr2 + i) << " ";
    }
    cout    
      
    

}