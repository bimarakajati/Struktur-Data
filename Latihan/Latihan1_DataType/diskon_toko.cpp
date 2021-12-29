#include <iostream>

using namespace std;

int main()
{
    cout << "TOKO SELALULAKU" << endl;
    cout << "PRODUK A" << endl; // 17.5
    cout << "PRODUK B" << endl; // 12.5
    cout << "PRODUK C" << endl; // 9.9
    cout << "PRODUK D" << endl; // 2.5

    // kamus
    char produk;
    float diskon;
    int harga = 10000;
    int total;
    cout << "Masukkan produk (A-D): ";
    cin >> produk;

    // algoritma
    if (produk == 'A' || produk == 'a') {
        diskon = 0.175;
    }
    else if (produk == 'B' || produk == 'b') {
        diskon = 0.125;
    }
    else if (produk == 'C' || produk == 'c') {
        diskon = 0.099;
    }
    else {
        diskon = 0.025;
    }
    cout << "Harga " << harga << ", dan anda mendapatkan diskon " << diskon << "%" << endl;
    total = harga - (harga * diskon);
    cout << "Total harga = " << total;
    return 0;
}
