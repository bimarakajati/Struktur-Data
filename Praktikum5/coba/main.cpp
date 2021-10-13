#include "header.h"

int main(){
    int x, y, total, total_kurang;
    // input x y
    cout << "Input x: "; cin >> x;
    cout << "Input y: "; cin >> y;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    // penampung hasil fungsi
    total = jumlah(x,y);
    total_kurang = kurang(x, y);

    // display hasil total
    cout << "Total: " << total << endl;
    cout << "Total: " << total_kurang << endl;

    return 0;
}
