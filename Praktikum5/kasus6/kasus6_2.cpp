#include <iostream>
using namespace std;

void PassByValue(int x){
x += 5;
cout << "Nilai x di fungsi Pass By Value()      : " << x << " " << &x << endl;
}

void PassByRederence(int *x){
*x += 5;
cout << "Nilai x di fungsi Pass By Reference()  : " << *x << " " << &x << endl;
}

int main(){
int x;

cout << "Masukan nilai x: ";
cin >> x;
PassByValue(x);
cout << "Nilai x di main()                      : " << x << " " << &x << endl;
cout << endl;
PassByRederence(&x);
cout << "Nilai x di main()                      : " << x << " " << &x << endl;

cout << "Luas persegi adalah                    : " << x*x << endl;

return 0;
}