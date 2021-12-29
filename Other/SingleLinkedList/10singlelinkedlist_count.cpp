#include <iostream>
using namespace std;

struct Buku
{
    /* komponen / member */
    string judul, pengarang;
    int tahunterbit;

    Buku *next;
};

Buku *head, *tail, *cur, *newNode, *del, *before;

// buat single linked list
void createSingleLinkedList(string judul, string pengarang, int tB){
    head = new Buku();
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunterbit = tB;
    head->next = NULL;
    tail = head;
}

// hitung single linked list
int countSingleLinkedList(){
    cur = head;
    int jumlah = 0;
    while (cur != NULL){
        jumlah++;
        cur = cur->next;
    }
    return jumlah;
}

// tambah awal single linked list
void addFirst(string judul, string pengarang, int tB){
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunterbit = tB;
    newNode->next = head;
    head = newNode;
}

// tambah akhir single linked list
void addLast(string judul, string pengarang, int tB){
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunterbit = tB;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

// tambah tengah single linked list
void addMiddle(string judul, string pengarang, int tB, int posisi){
    if(posisi < 1 || posisi > countSingleLinkedList()){
        cout << "Posisi diluar jangkauan" << endl;
    }else if(posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }else{
        newNode = new Buku();
        newNode->judul = judul;
        newNode->pengarang = pengarang;
        newNode->tahunterbit = tB;
        // tranversing
        cur = head;
        int nomor = 1;
        while(nomor < posisi - 1){
            cur = cur->next;
            nomor++;
        }

        newNode->next = cur->next;
        cur->next = newNode;
    }
}

// hapus awal single linked list
void removeFirst(){
    del = head;
    head = head->next;
    delete del;
}

// hapus akhir single linked list
void removeLast(){
    del = tail;
    cur = head;
    while(cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;
}

// hapus tengah single linked list
void removeMiddle(int posisi){
    if(posisi < 1 || posisi > countSingleLinkedList()){
        cout << "Posisi diluar jangkauan" << endl;
    }else if(posisi == 1 || posisi == countSingleLinkedList()){
        cout << "Posisi bukan posisi tengah" << endl;
    }else{
        int nomor = 1;
        cur = head;
        while(nomor <= posisi){
            if(nomor == posisi-1){
                before = cur;
            }
            if(nomor == posisi){
                del = cur;
            }
            cur = cur->next;
            nomor++;
        }
        before->next = cur;
        delete del;
    }
}

// ubah awal single linked list
void changeFirst(string judul, string pengarang, int tB){
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunterbit = tB;
}

// ubah akhir single linked list
void changeLast(string judul, string pengarang, int tB){
    tail->judul = judul;
    tail->pengarang = pengarang;
    tail->tahunterbit = tB;
}

// ubah tengah single linked list
void changeMiddle(string judul, string pengarang, int tB, int posisi){
    if(posisi < 1 || posisi > countSingleLinkedList()){
        cout << "Posisi diluar jangkauan" << endl;
    }else if(posisi == 1 || posisi == countSingleLinkedList()){
        cout << "Posisi bukan posisi tengah" << endl;
    }else{
        cur = head;
        int nomor = 1;
        while(nomor < posisi){
            cur = cur->next;
            nomor++;
        }
        cur->judul = judul;
        cur->pengarang = pengarang;
        cur->tahunterbit = tB;
    }
}

// cetak single linked list
void printSingleLinkedList(){
    cout << "Jumlah data ada    : " << countSingleLinkedList() << endl;
    cur = head;
    while (cur != NULL)
    {
        /* code */
        cout << "Judul Buku         : " << cur->judul << endl;
        cout << "Pengarang Buku     : " << cur->pengarang << endl;
        cout << "Tahun Terbit Buku  : " << cur->tahunterbit << endl;

        cur = cur->next;
    }
}

int main(){
    createSingleLinkedList("Kata", "Geez & Aan", 2018);
    printSingleLinkedList();

    cout << "\n" << endl;

    addFirst("Dia adalah Kakakku", "Tere Liye", 2009);
    printSingleLinkedList();
    
    cout << "\n" << endl;

    addLast("Aroma Karsa", "Dee Lestari", 2018);
    printSingleLinkedList();
    
    cout << "\n" << endl;

    removeFirst();
    printSingleLinkedList();
    
    cout << "\n" << endl;

    addLast("11.11", "Fiersa Besari", 2018);
    printSingleLinkedList();

    cout << "\n" << endl;

    removeLast();
    printSingleLinkedList();
    
    cout << "\n" << endl;

    changeFirst("Berhenti di Kamu", "Gia Pratama", 2018);
    printSingleLinkedList();
    
    cout << "\n" << endl;

    addMiddle("Bumi Manusia", "Pramoedya Anata Toer", 2005, 2);
    printSingleLinkedList();
    
    cout << "\n" << endl;

    addMiddle("Negeri 5 Menara", "Ahmad Fuadi", 2009, 4);
    // addMiddle("Negeri 5 Menara", "Ahmad Fuadi", 2009, 3);
    printSingleLinkedList();
    
    cout << "\n" << endl;

    removeMiddle(1);
    // removeMiddle(2);
    printSingleLinkedList();
    
    cout << "\n" << endl;

    changeMiddle("Sang Pemimpi", "Andrea Hirata", 2006, 2);
    printSingleLinkedList();
}