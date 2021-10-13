#include <iostream>
using namespace std;

struct data
{
    string nim[4];
    string nama[4];
    string jurusan[4];
    int thLulus[4];

};

int main(){
    data datamhs;
    int jumMhs;
    cout << "Masukan Jumlah MHS : ";
    cin >> jumMhs;

    for(int i = 0; i < jumMhs; i++){
        cout << "Masukkan Nim : ";
        cin >> datamhs.nim[i];
        cout << "Masukkan Nama : ";
        cin >> datamhs.nama[i];
        cout << "Masukkan Jurusan : ";
        cin >> datamhs.jurusan[i];
        cout << "Masukkan Tahun Lulus : ";
        cin >> datamhs.thLulus[i];
    }

    cout << endl << endl;
    for (int i = 0; i < jumMhs; i++)
    {
        cout << "======== DATA MAHASISWA KE-"<< i+1 << " ========"<< endl;
        cout << "nama mahasiswa : ";
        cout << datamhs.nim[i] << endl;
        cout << "Nim mahasiswa : ";
        cout << datamhs.nama[i] << endl;
        cout << "jurusan mahasiswa : ";
        cout << datamhs.jurusan[i] << endl;
        cout << "tahun lulus mahasiswa : ";
        cout << datamhs.thLulus[i] << endl;
        cout << endl << endl;
    }
    return 0;
}