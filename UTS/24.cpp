// BIMA RAKAJATI
// A11.2020.13088

#include <iostream>
#define Max 5
using namespace std;

// deklarasi komponen Queue Array
int qArr[Max];
int head;
int tail;

// deklarasi fungsi prototipe
void inisialisasi();
int isEmpty();
// int isFull();
void Enqueue(int);
void Dequeue();
void Cetak();

int main()
{
    cout << "Program Queue - Array" << endl;
    inisialisasi();
    Enqueue(5);
    Enqueue(10);
    Cetak();
    return 0;
}

void inisialisasi(){
    // atur kondisi queue dalam keadaan kosong
    head = -1;
    tail = -1;
}

int isEmpty(){
    // 2 kondisi: kosong atau tidak kosong
    if(tail == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void Enqueue(int nilai){
    // 2 kondisi:
    // kondisi pertama: antrian masi kosong
    if(isEmpty() == 1){
        head = tail = 0;
        qArr[tail] = nilai;
        cout << "Data Masuk: " << qArr[tail] << endl;
    }
    // kondisi kedua: antrian tidak kosong/ sudah ada antrian masuk
    else{
        tail++;
        qArr[tail] = nilai;
        cout << "Data Masuk: " << qArr[tail] << endl;
    }
}

void Dequeue(){
    // diijinkan untuk tidak mengecek kondisi Queue kosong atau tidak
    int i;
    for(i=head; i<=tail-1; i++){
        qArr[i] = qArr[i+1];
    }
}

void Cetak(){
    int i;
    for(i=head; i<=tail; i++){
        cout << "[" << qArr[i] << "]" << " - ";
    }
    cout << "\n";
}