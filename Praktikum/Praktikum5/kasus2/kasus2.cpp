#include<iostream>
using namespace std;

struct nilai
{
    int x;
    int y;
};

int main(){
    nilai n1;
    cout << "Input X value : ";
    cin >> n1.x;
    cout << "Input Y value : ";
    cin >> n1.y;

    cout << "Nilai dari  X adalah " << n1.x << " nilai dengan Y adalah " << n1.y << endl;

    return 0;
}