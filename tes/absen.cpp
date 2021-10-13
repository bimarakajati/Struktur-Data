#include <iostream>
using namespace std;

int main()
{
    int arr[3]={6, 9, 0};
    int *ptr = arr;
    cout << "Alamat dari Pointer: " << &ptr << endl; 
    cout << "Alamat dari Array: " << &arr << endl; 
}