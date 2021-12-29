#include <iostream>
using namespace std;

void PassByValue(int x){
    x += 5;
    cout << x << endl;
}

void PassByRederence(int *x){
    *x += 5;
    cout << *x << endl;
}

int main(){
    int x;

    cout << "Masukan nilai x: "; cin >> x;

    cout << "Nilai x: " << x << endl;
    cout << "Nilai x di PassByValue()       : ";
    PassByValue(x);
    cout << "Nilai x di PassByReference()   : ";
    PassByRederence(&x);
    cout << "Nilai x: " << x << endl;

    return 0;
}