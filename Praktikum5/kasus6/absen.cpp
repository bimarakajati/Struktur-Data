// PassByValue akan membuat alamat baru dan tidak mengubah nilai asli dari variabel, sedangkan PassByReference akan mengirim alamat sehingga dapat mengubah nilai asli dan akan muncul hasil yang baru.
 
// Contoh:

#include <iostream>
using namespace std;

void PassByValue(int x){
    x += 5;
    cout << x << endl;
}

void PassByReference(int *x){
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
    PassByReference(&x);
    cout << "Nilai x: " << x << endl;

    return 0;
}