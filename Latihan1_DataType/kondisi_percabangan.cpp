#include <iostream>

using namespace std;

int main()
{
    cout << "Kondisi Percabangan" << endl;

    // kamus
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    // algoritma
    if (nilai >= 85) {
        cout << "Lulus predikat CUMLAUDE";
    }
    else if (nilai >= 70 && nilai < 85) {
        cout << "Dinyatakan TIDAK LULUS";
    }
    else {
        cout << "input is wrong";
    }
    return 0;
}
