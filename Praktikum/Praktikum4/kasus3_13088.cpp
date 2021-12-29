#include <iostream>
using namespace std;

int main()
{
    cout << "Kasus-3 Point to" << endl;

    // INTEGER
    int iNumber;
    cout << "Masukkan nilai integer: ";
    cin >> iNumber;
    cout << "Nilai iNumber: " << iNumber << endl;
    // var pointer
    int *iPtr = &iNumber;
    cout << "Nilai iPtr: " << *iPtr << endl;
    // address
    cout << "iNumber: " << &iNumber << endl;
    cout << "iPtr: " << &iPtr << endl;
    
    // FLOAT
    float fNumber;
    cout << "Masukkan nilai float: ";
    cin >> fNumber;
    cout << "Nilai fNumber: " << fNumber << endl;
    // var pointer
    float *fPtr = &fNumber;
    cout << "Nilai cPtr: " << *fPtr << endl;
    // address
    cout << "fNumber: " << &fNumber << endl;
    cout << "cPtr: " << &fPtr << endl;
    
    // CHAR
    char cChar;
    cout << "Masukkan sebuah character: ";
    cin >> cChar;
    cout << "Nilai cChar: " << cChar << endl;
    // var pointer
    char *cPtr = &cChar;
    cout << "Nilai cPtr: " << *cPtr << endl;
    // address
    cout << "cChar: " << static_cast<void *>(&cChar) << endl;
    cout << "cPtr: " << &cPtr << endl;

    return 0;
}