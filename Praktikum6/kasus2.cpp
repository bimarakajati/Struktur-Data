#include<iostream>
using namespace std;
#define Max 5

struct IsStack{
    int arr[Max]; // deklarasi stack tipe array
    int top; // penanda indeks dalam stack
};
IsStack Stack;
void inisialisasi();
int isEmpty();
int isFull();
void Push(int);
void Pop();
void Cetak();

int main(){
    cout << "Kasus-2 Stack Versi ADT" << endl;
    inisialisasi();
    Push(55);
    Push(45);
    Push(35);
    Push(25);
    Push(15);
    Push(5);
    Cetak();

    return 0;
}

void inisialisasi(){
    // set stack dalam kondisi kosong
    Stack.top = -1;
}

int isEmpty(){
    // cek kondisi stack kosong/ ada isinya
    if(Stack.top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    // cek kondisi stack penuh/ belum penuh
    if(Stack.top == Max-1){
        return 1;
    }
    else{
        return 0;
    }
}

void Push(int nilai){
    // syarat input: cek stack penuh/ belum penuh
    if(isFull() == 1){
        cout << "stack is full" << endl;
    }
    else{
        Stack.top++;
        Stack.arr[Stack.top] = nilai;
        // cout << "data sudah masuk" << endl;
        cout << "data " << Stack.arr[Stack.top] << " masuk!" << endl;
    }
}

void Pop(){
    // syarat pop: cek kosong/ ada isinya
    if(isEmpty() == 1){
        cout << "stack is empty";
    }
    else{
        int temp; // penampung data teratas
        temp = Stack.arr[Stack.top];
        Stack.top--; // remove data
    }
}

void Cetak(){
    // cetak stack berdasarkan range elemen awal sampai elemen teratas
    for(int i=Stack.top;i>=0;i--){
        if(i == Stack.top){
            cout << "{" << Stack.arr[i] << "}" << "[TOP]" << endl;    
        }
        else{
            cout << "{" << Stack.arr[i] << "}" << endl;
        }
    }
}