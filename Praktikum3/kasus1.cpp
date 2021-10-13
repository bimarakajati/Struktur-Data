#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 1 - -Deret Angka!" << endl;
    int n, jumlah;
    cout << "Masukkan banyak deret: ";
    cin >> n;
    cout << "Deret: ";

    for(int i=1; i<=n; i++){
        //body of loop
        cout << i << " "; //statement
        jumlah += i;
    }
    cout << "\nJumlah: " << jumlah;
 return 0;
}
