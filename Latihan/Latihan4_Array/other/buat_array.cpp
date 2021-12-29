#include <iostream>
using namespace std;

int main(){
    // membuat array kosong dengan tipe data integer dan panjang 10
    int nama_array[10];

    // membuat array dengan langsung diisi
    int nama_arr[3] = {0, 3, 2};
    
    // Cara Mengambil Data dari Array
    char huruf[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << "Huruf: " << huruf[2] << endl;

    // mengubah isi data array
    huruf[2] = 'z';
    cout << "Huruf: " << huruf[2] << endl;

    return 0;
}