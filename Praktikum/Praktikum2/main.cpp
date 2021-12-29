// NAMA = BIMA RAKAJATI
// NIM = A11.2020.13088

#include <iostream>

using namespace std;
// fungsi prototipe
int MaxAB(int,int); // kasus 4

int main()
{
    cout << "PRAKTEK 2!" << endl;

    cout << "\nKasus 1 - Buat Program" << endl;
    float ipk;
    cout << "Masukkan IPK: ";
    cin >> ipk;
    if (ipk >= 3.50){
        cout << "IPK " << ipk << ", maka PREDIKAT adalah CUMLAUDE" << endl;
    }
    else if (ipk > 3.01 && ipk < 3.49){
        cout << "IPK " << ipk << ", maka PREDIKAT adalah SANGAT MEMUASKAN" << endl;
    }
    else if (ipk > 2.00 && ipk < 2.49){
        cout << "IPK " << ipk << ", maka PREDIKAT adalah MEMUASKAN" << endl;
    }
    else {
        cout << "IPK " << ipk << ", maka PREDIKAT adalah CUKUP" << endl;
    }

    cout << "\nKasus 2 - Odd or Even" << endl;
    int nilai;
    cout << "Masukkan sebuah nilai: ";
    cin >> nilai;

    if (nilai > 0){
        if (nilai % 2 == 0){
            cout << nilai << " adalah Genap Positif" << endl;
        }
        else {
            cout << nilai << " adalah Ganjil Positif" << endl;
        }
    }
    else if (nilai < 0) {
        if (nilai % 2 == 0){
            cout << nilai << " adalah Genap Negatif" << endl;
        }
        else {
            cout << nilai << " adalah Ganjil Negatif" << endl;
        }
    }
    else {
        cout << nilai << " adalah nol" << endl;
    }

    cout << "\nKasus 3 - Besar atau Kecil" << endl;
    int nilai1, nilai2, nilai3;
    int hasil;
    cout << "Masukkan 3 nilai " << endl;
    cout << "Nilai pertama: ";
    cin >> nilai1;
    cout << "Nilai kedua: ";
    cin >> nilai2;
    cout << "Nilai ketiga: ";
    cin >> nilai3;

    if (nilai1 > nilai2){
        hasil = nilai1;
    }
    else {
        hasil = nilai2;
    }
    if (hasil > nilai3){
        hasil = hasil;
    }
    else {
        hasil = nilai3;
    }
    cout << "Bilangan terbesar adalah " << hasil << endl;

    cout << "\nKasus 4 - Besar atau Kecil versi 2" << endl;
    int x, y, result;
    x = 6;
    y = 9;
    result = MaxAB(x,y);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "hasilnya " << result << " terbesar" << endl;

    cout << "\nKasus 4 - Besar atau Kecil versi 3" << endl;
    int z;
//    x = 6;
//    y = 9;
    z = 69;
    result = MaxAB(MaxAB(x,y),z);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    cout << "hasilnya " << result << " terbesar" << endl;

    return 0;
}
int MaxAB(int a,int b) {
    int hasil;
    if (a > b){
        hasil = a;
    }
    else {
        hasil = b;
    }
    return hasil;
}
