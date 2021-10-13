#include <iostream>
using namespace std;

struct hitung //tag structure
{
    /* data */
    int x = 1;
    int y = 2;
    int total;
};

int main()
{
    // struct hitung jumlah;
    typedef struct hitung operasi;
    operasi jumlah;
    operasi kali;

    jumlah.x = 20;
    jumlah.total = jumlah.x + jumlah.y;
    kali.y = 100;
    kali.total = kali.x + kali.y;

    cout << jumlah.x << " " << jumlah.y << " " << jumlah.total << endl;
    cout << (kali.total) << endl;
    return 0;
}