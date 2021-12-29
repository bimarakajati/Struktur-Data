#include <iostream>
using namespace std;

struct mahasiswa {
    char nim[15];
    char nama[50];
};

int main() {
    struct mahasiswa datas[4];
    for (int i = 0; i < 1; i++) {
        cout << "Masukkan NIM: " <<endl;
        for (int j = 0; j < sizeof(datas)/sizeof(*datas); j++) {
            cin >> datas[j].nim;
        }

        cout << "Masukkan nama: " <<endl;
        for (int k = 0; k < sizeof(datas)/sizeof(*datas); k++) {
            cin >> datas[k].nama;
        }
    };

    cout << "\n";
    for (int i = 0; i < sizeof(datas)/sizeof(*datas); i++) {
        cout << datas[i].nim << " " << datas[i].nama << endl;
    }
}