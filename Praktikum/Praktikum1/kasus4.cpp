#include <iostream>

using namespace std;

int main()
{
    float ipk;
    cout << "Masukkan IPK: "; cin >> ipk;

    if(ipk>=3.50){
        cout << "PREDIKAT adalah CUMLAUDE";
    }
    else if(ipk>3.00 && ipk<3.50){
        cout << "PREDIKAT adalah SANGAT MEMUASKAN";
    }
    else if(ipk>=2.50 && ipk<=3.00){
        cout << "PREDIKAT adalah MEMUASKAN";
    }
    else if(ipk>=2.00 && ipk<2.50){
        cout << "PREDIKAT adalah CUKUP";
    }
    else{
        cout << "Input anda salah";
    }
    return 0;
}