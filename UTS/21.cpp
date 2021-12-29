// BIMA RAKAJATI
// A11.2020.13088

#include <iostream>
using namespace std;

void Cetak_Array(int a[5], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            a[i] = a[i] * 100;
            cout << a[i] << " ";
        }
        else
        {
            cout << a[i] << " ";
        }
    }
}

int main()
{
    int A[5] = {3, 1, 1, 1, 3};
    Cetak_Array(A, 5);
    return 0;
}
