#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    // input array
    for(int i=1;i<=5;i++){
        cout << "Masukkan bil: ";
        cin >> arr[i];
    }
    
    // lihat array
    cout << "Array arr = ";
    for(int j=1;j<=5;j++){
        // cout << "Elemen array ke-" 
        // << j << " = " << arr[j] << endl;
        cout << arr[j] << " ";
    }
    return 0;
}