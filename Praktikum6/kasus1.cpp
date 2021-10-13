#include<iostream>
using namespace std;
#define Max 5
int arr[Max]; // deklarasi stack tipe array
int top; // penanda indeks dalam stack
void inisialisasi();
int isEmpty();
int isFull();
void Push(int);
void Pop();
void Cetak();

int main(){
    cout << "Kasus-1 Stack Versi Array" << endl;
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
    top = -1;
}

int isEmpty(){
    // cek kondisi stack kosong/ ada isinya
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    // cek kondisi stack penuh/ belum penuh
    if(top == Max-1){
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
        top++;
        arr[top] = nilai;
        // cout << "data sudah masuk" << endl;
        cout << "data " << arr[top] << " masuk!" << endl;
    }
}

void Pop(){
    // syarat pop: cek kosong/ ada isinya
    if(isEmpty() == 1){
        cout << "stack is empty";
    }
    else{
        int temp; // penampung data teratas
        temp = arr[top];
        top--; // remove data
    }
}

void Cetak(){
    // cetak stack berdasarkan range elemen awal sampai elemen teratas
    for(int i=top;i>=0;i--){
        if(i == top){
            cout << "{" << arr[i] << "}" << "[TOP]" << endl;    
        }
        else{
            cout << "{" << arr[i] << "}" << endl;
        }
    }
}