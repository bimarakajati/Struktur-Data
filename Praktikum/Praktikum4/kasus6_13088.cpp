#include<iostream>
using namespace std;

int main()
{
    cout << "Kasus 6-Eksperimen Increment" << endl;
    const char *ptr = "Hello";
    
    while(ptr++){
        cout << ++ptr;
        break;
    }
    // Analisis: Hanya "llo" yang ditampilkan
    
    // cout << endl;
    // while(ptr++){
    //     cout << *(ptr++);
    //     break;
    // }
    // Analisis: Hanya menampilkan elemen terakhir ("e").

    // cout << endl;
    // while(ptr++){
    //     cout << *(++ptr);
    //     break;
    // }
    // Analisis: Hanya menampilkan "l".

    return 0;
}