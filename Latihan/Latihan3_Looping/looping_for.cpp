#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Masukkan n: "; cin >> n;

    cout << "--Increment!" << endl;
    for(int i=1; i<=n; i++){
        //body of loop
        cout << i << ". UDINUS" << endl; //statement
    }

    cout << "--Decrement!" << endl;
    for(int i=n; i>0; i--){
        //body of loop
        cout << i << ". UDINUS" << endl; //statement
    }

    cout << "--Ganjil Genap" << endl;
    for(int i=1; i<=n; i++){
        //body of loop
        if(i%2 == 0){
            cout << i << ". Genap" << endl;
        }
        else{
            cout << i << ". Ganjil" << endl;
        }
    }

    return 0;
}
