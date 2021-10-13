#include <iostream>
using namespace std;

int main()
{
    cout << "Kasus 1a-Deret Angka" << endl;
    
    int n, jumlah;
    jumlah = 0;
    cout << "Masukkan banyak deret: ";
    cin >> n;

    int arr[n];
    // input array
    for(int i=1;i<=n;i++){
        cout << "Masukkan angka: ";
        cin >> arr[i];
        jumlah = jumlah+arr[i];
    }
    
    // lihat array
    cout << "Deret: ";
    for(int j=1;j<=n;j++){
        cout << arr[j] << " ";
    }

    // jumlah dan rata2
    cout << "\nJumlah: " << jumlah << endl;
    cout << "Average: " << (jumlah/n);
    return 0;
}