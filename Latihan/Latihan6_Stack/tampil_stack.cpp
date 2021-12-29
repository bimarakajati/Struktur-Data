#include <iostream>
using namespace std;
#define max_stack 5
// int L[max_stack]; //L adalah array
int L[max_stack] = {1, 2, 3, 4}; //L adalah array
int top;

int main(){
    // L = {1, 2, 3, 4};
    tampil();
    return 0;
}

// tampil tipe void
void tampil(){
    // ascending
    for(int i=0;i<=top;i++){
        cout << L[i];
    }
    // descending
    for(int i=top;i>=0;i--){
        if(i==top){
            cout << L[i] << "top";
        }
        else{
            cout << L[i];
        }
    }
    // for(int i=top;i>=0;i--){
    //     cout << L[i];
    // }
}