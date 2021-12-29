#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 2 - Nested Loop!" << endl;
    int n;
    cout << "Masukkan angka: ";
    cin >> n;
    cout << "Output: " << endl;

    for(int i=1; i<=n; i++){
        //body of loop
        for(int i=1; i<=n; i++){
             cout << i << " "; //statement
        }
        cout << endl;
    }
 return 0;
}
