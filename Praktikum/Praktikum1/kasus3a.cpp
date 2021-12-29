#include <iostream>

using namespace std;

int main()
{
    int a, b;
    bool hasil;
    cout << "Masukan bilangan A: ";
    cin >> a;
    cout << "Masukan bilangan B: ";
    cin >> b;

    // cout << "Hasil Operasi: " << endl;
    if(a<b){
        cout << a << " < " << b << " = 1"  << endl;
    }
    else{
        cout << a << " < " << b << " = 0"  << endl;
    }
    
    if(a>b){
        cout << a << " > " << b << " = 1"  << endl;
    }
    else{
        cout << a << " > " << b << " = 0"  << endl;
    }
    
    if(a==b){
        cout << a << " = " << b << " = 1"  << endl;
    }
    else{
        cout << a << " = " << b << " = 0"  << endl;
    }
    
    if(a!=b){
        cout << a << " != " << b << " = 1"  << endl;
    }
    else{
        cout << a << " != " << b << " = 0"  << endl;
    }
    return 0;
}