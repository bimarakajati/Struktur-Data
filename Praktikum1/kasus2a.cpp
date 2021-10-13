#include <iostream>

using namespace std;

int main()
{
    char nama[99], jurusan[99], universitas[99];
    int umur = 22;
    float ipk;
    ipk = 3.75;
    cout << "Masukkan nama: "; cin >> nama;
    cout << "Masukkan jurusan: "; cin >> jurusan;
    cout << "Masukkan universitas: "; cin >> universitas;


    cout << "\nNama saya: " << nama << endl;
    cout << "Jurusan: " << jurusan << endl;
    cout << "Universitas: " << universitas << endl;
    cout << "Umur: " << umur << " tahun" << endl;
    cout << "IPK: " << ipk << endl;
    return 0;
}