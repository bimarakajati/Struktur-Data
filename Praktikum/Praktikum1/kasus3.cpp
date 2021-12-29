#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Masukan bilangan A: ";
    cin >> a;
    cout << "Masukan bilangan B: ";
    cin >> b;

    cout << "Hasil Operasi: " << endl;
    cout << a << " + " << b << " = " << (a+b) << endl;
    cout << a << " - " << b << " = " << (a-b) << endl;
    cout << a << " * " << b << " = " << (a*b) << endl;
    cout << a << " / " << b << " = " << (a/b) << endl;
    return 0;
}