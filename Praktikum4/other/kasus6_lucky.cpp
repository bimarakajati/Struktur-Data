#include<iostream>
using namespace std;

int main()
{
    cout << "Kasus 6-Eksperimen Increment" << endl;
    const char *p = "Hello";
    
    while(*p++)
        cout << ++p;
    // Analisis: Hanya dua elemen terakhir yang di loop 2 kali.

    while(*p++)
        cout << *p++;
    // Analisis: Akan ada variable yang dikhianati atau di tinggal karena efek samping dari postfix.
        
    while(*p++)
        cout << *(++p);    
    // Analisis: Hanya dua element terakhir yang di tampilkan tanpa looping.

    return 0;
}