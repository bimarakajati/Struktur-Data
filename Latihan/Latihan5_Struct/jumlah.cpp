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
    struct hitung jumlah;
    jumlah.x = 20;
    jumlah.total = jumlah.x + jumlah.y;
    cout << jumlah.x << " " << jumlah.y << endl;
    cout << (jumlah.x + jumlah.y) << endl;
    cout << jumlah.total;
    return 0;
}