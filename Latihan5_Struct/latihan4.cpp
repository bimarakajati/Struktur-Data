#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim[4], nama[4], jurusan[4];
    int tahunlulus[4];
};

int main(){
    struct mahasiswa data;
    int jumlah_mahasiswa;
    cout << "Masukkan jumlah mahasiswa  : ";
    cin >> jumlah_mahasiswa;

    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        cout << "\nInput data mahasisa ke-" << i+1 << endl;
        cout << "Masukkan NIM           : ";
        cin >> data.nim[i];
        cout << "Masukkan nama          : ";
        cin >> data.nama[i];
        cout << "Masukkan jurusan       : ";
        cin >> data.jurusan[i];
        cout << "Masukkan tahun lulus   : ";
        cin >> data.tahunlulus[i];
    }
    
    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        cout << "\n## DATA MAHASISWA KE-" << i+1 << " ##" << endl;
        cout << "NIM            : " << data.nim[i] << endl;
        cout << "Nama           : " << data.nama[i] << endl;
        cout << "Jurusan        : " << data.jurusan[i] << endl;
        cout << "Tahun Lulus    : " << data.tahunlulus[i] << endl;
    }

    return 0;
}