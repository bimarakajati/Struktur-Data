#include <iostream>

using namespace std;

int main()
{
//    int n;
//    cout << "Masukkan n: "; cin >> n;
//
//    cout << "--While increment!" << endl;
//    int x = 1; //initial value
//    while(x<=n){
//        //cout << x << ". Udinus" << endl;
//        cout << x << " ";
//        x++; //update value
//    }

//    cout << "--While decrement!" << endl;
//    int a = 10; //initial value
//    while(a>=1){
//        //cout << x << ". Udinus" << endl;
//        if(a%2!=0){
//            cout << a << " ";
//        }
//        a--; //update value
//    }
//
//    cout << "\n--do...While decrement!" << endl;
//    int x = 1;
//    int y = 10;
//
//    do{
//        if(y%2!=0){
//            cout << y << " ";
//        }
//        y--;
//    } while(y>=0);

//    cout << "\n--While (stop jika input = 1)!" << endl;
//    int y; //initial value
//    while(y!=1){
//        cout << "Input: ";
//        cin >> y;
//        cout << y << endl;
//    }
//
    cout << "\n--do...While!" << endl;
    int z = 10; //initial value
    do{
        cout << "Input: ";
        cin >> z;
        cout << z << endl;
    }while(z!=1);

    return 0;
}

