#include "header.h"

int main()
{
    cout << "Kasus 1-Lengkapi Program!" << endl;

    //tentukan deklarasi variabel n
    int n;
    cout << "\nMasukkan n: "; cin >> n;

    cout << "\nLuas persegi adalah        : " << luas_persegi(n) <<endl;
    cout << "Faktorial adalah           : " << fact(n) <<endl;
    cout << "Bilangan terbesar adalah   : " << is_besar(n) <<endl;
    cout << "Bilangan terkecil adalah   : " << is_kecil(n) <<endl;
    cout << "Apakah n bilangan ganjil?  : " << is_ganjil(n) <<endl;
    cout << "Apakah n bilangan genap?   : " << is_genap(n) <<endl;
    cout << "Bilangan integer positif   : " << to_positive(n) <<endl;
    cout << "Bilangan integer negatif   : " << to_negative(n) <<endl;
    cout << "Jumlah bilangan n          : " << sum_n(n) <<endl;
    cout << "Rata-rata n                : " << avg_n(n) <<endl;
    return 0;
}
