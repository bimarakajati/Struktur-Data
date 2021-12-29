#include <iostream>
using namespace std;

struct Buku
{
    /* komponen / member */
    string judul, pengarang;
    int tahunterbit;

    Buku *next;
};

Buku *head, *tail, *cur, *newNode, *del;

// create single linked list
void createSingleLinkedList(string judul, string pengarang, int tB){
    head = new Buku();
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunterbit = tB;
    head->next = NULL;
    tail = head;
}

// tambahAwal single linked list
void addFirst(string judul, string pengarang, int tB){
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunterbit = tB;
    newNode->next = head;
    head = newNode;
}

// tambahAkhir single linked list
void addLast(string judul, string pengarang, int tB){
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunterbit = tB;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

// remove first
void removeFirst(){
    del = head;
    head = head->next;
    delete del;
}

// print single linked list
void printSingleLinkedList(){
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
}