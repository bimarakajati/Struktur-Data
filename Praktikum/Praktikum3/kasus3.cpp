#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 3 - Triangle of Numbers!" << endl;
    int n, j;
    cout << "Masukkan banyak deret: ";
    cin >> n;
    cout << "Output: " << endl;

    for(int i=1; i<=n; i++){
        //body of loop
        for(int j=1; j<=i; j++){
             cout << j << " "; //statement
        }
        cout << endl;
    }
 return 0;
}
