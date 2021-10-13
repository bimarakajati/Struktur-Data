#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 5 - Triangle of Numbers Version 3!" << endl;
    int n;
    cout << "Masukkan banyak deret: ";
    cin >> n;
    cout << "Output: " << endl;

    for(int i=1; i<=n; i++){
        //body of loop
        for(int j=1; j<=n-i; j++){
             cout << "  "; //spasi
        }
        for(int k=1; k<=i; k++){
             cout << k << " "; //angka
        }
        cout << endl;
    }
 return 0;
}
