#include <iostream>

using namespace std;

void PassByValue (int x) {
    x = x + 5;
    cout << x << endl;
}

void PassByReference (int *x) {
    *x = *x + 5;
    cout << *x << endl;
}

int main()
{
    int x;
    cout << "Masukkan nilai X: ";
    cin >> x;

    cout << "Nilai X: ";
    cout << x << endl;

    cout << "Nilai X Pass By Value: ";
    PassByValue(x);

    cout << "Nilai X Pass By Reference: ";
    PassByReference(&x);

    cout << x << endl;

    return 0;
}