#include <iostream>
using namespace std;

int main()
{
    cout << "Kasus-4 Modify Program" << endl;

    float x, y, jumlah;
    x = 10;
    y = 20;

    float *ptrA = &x;
    float *ptrB = &y;
    x = 20.5;
    y = 30.5;
    jumlah = x + y;
    cout << "Hasilnya adalah: " << jumlah;
}