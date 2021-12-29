#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 4 - Triangle of Numbers Version 2!" << endl;
    int n;
    cout << "Masukkan banyak deret: ";
    cin >> n;
    cout << "Output: " << endl;

    for(int i=n; i>=1; i--){
        //body of loop
        for(int j=1; j<=i; j++){
             cout << j << " "; //statement
        }
        cout << endl;
    }
 return 0;
}
