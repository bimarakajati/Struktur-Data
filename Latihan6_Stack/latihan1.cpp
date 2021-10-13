#include <iostream>
using namespace std;
#define max_stack 5
int L[max_stack]; //L adalah array
int top;

// L = {0, 1, 2, 3};

// Inisialisasi stack
void inisialisasi(){
    // TOP diisi dengan -1, karena array dimulai dari 0, yang berarti bahwa data stack kosong
    // TOP adalah variabel penanda dalam stack yang menunjukkan elemen teratas data stack (Top of STACK)
    top = -1;
}

// Fungsi isFull() digunakan untuk mengecek apakah stack penuh atau tidak
int IsFull(){
    if(top == max_stack - 1){
        // Jika TOP sama dengan MAX_STACK – 1, maka stack penuh
        return 1;
    }
    else{
        // Jika TOP < MAX_STACK – 1, maka stack belum penuh
        return 0;
    }
}

// Apakah stack kosong?
int IsEmpty(){
    if(top == -1){
    // Memeriksa TOP, jika TOP = -1 maka stack masih kosong
        return 1;
    }
    else{
        return 0;
    }
}

// Memasukkan data ke stack
void Push(int nilai){
    if(isFull()==1){
        cout << "ARRAY IS OVERFLOW";
    }
    else{
        // Jika data belum penuh, tambah satu (increment) nilai TOP terlebih dahulu
        top++;
        // kemudian masukkan nilai (elemen) berdasarkan indeks TOP tersebut
        L[top] = nilai;
    }
}

// Mengambil data stack paling atas (array)
void Pop(){
    if(isEmpty()==1){
        // Tampilkan terlebih dahulu nilai elemen teratas dengan mengakses indeks sesuai dengan TOP
        cout << "ARRAY IS EMPTY";
    }
    else{
        // Decrement nilai TOP sehingga elemen stack berkurang
        top--;
    }
}
