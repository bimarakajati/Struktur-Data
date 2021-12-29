#include <iostream>

using namespace std;

int main()
{
    cout << "Latihan 2!" << endl;
    cout << "DATA DIRI" << endl;
    char nama_mhs[30];
    char alamat[35];
    char jenis_kelamin[10];
    char tempat_lahir[20];
    char tgl_lahir[10];
    char asal_sekolah[25];
    int umur; // deklarasi
    umur = 20; // inisialisasi

    // input
    cout << "Masukkan nama anda     : ";
    cin >> nama_mhs;
    cout << "Masukkan jenis kelamin : ";
    cin >> jenis_kelamin;
    cout << "Masukkan umur          : ";
    cin >> umur;
    cout << "Masukkan tempat lahir  : ";
    cin >> tempat_lahir;
    cout << "Masukkan tanggal lahir : ";
    cin >> tgl_lahir;
    cout << "Masukkan alamat        : ";
    cin >> alamat;
    cout << "Masukkan asal sekolah  : ";
    cin >> asal_sekolah;

    // tampil data
    cout << "\nNama saya adalah " << nama_mhs
    <<", saya seorang " << jenis_kelamin
    <<", umur saya " << umur << " tahun"
    <<", lahir di " << tempat_lahir
    <<" pada " << tgl_lahir
    <<", sekarang tinggal di " << alamat
    <<", dan berasal sekolah dari " << asal_sekolah
    << endl;
    return 0;
}
