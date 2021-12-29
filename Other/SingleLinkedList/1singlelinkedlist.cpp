#include <iostream>
using namespace std;

struct Buku
{
    /* komponen / member */
    string judul, pengarang;
    int tahunterbit;

    Buku *next;
};

int main(){
    // inisialisasi single linked list
    Buku *node1, *node2, *node3;

    // versi prosedural
    // node1 = (Buku*) malloc(sizeof(Buku));
    // versi pbo
    node1 = new Buku();
    node2 = new Buku();
    node3 = new Buku();

    // pengisian node 1
    node1->judul = "Matematika";
    node1->pengarang = "Ahli Matematika";
    node1->tahunterbit = 1995;
    node1->next = node2;
    // pengisian node 2
    node2->judul = "Dia adalah Kakakku";
    node2->pengarang = "Tere Liye";
    node2->tahunterbit = 2009;
    node2->next = node3;
    // pengisian node 3
    node3->judul = "Kata";
    node3->pengarang = "Geez & Aan";
    node3->tahunterbit = 2018;
    node3->next = NULL;

    // print single linked list
    Buku *cur;
    cur = node1;
    while (cur != NULL)
    {
        /* code */
        cout << "Judul Buku         : " << cur->judul << endl;
        cout << "Pengarang Buku     : " << cur->pengarang << endl;
        cout << "Tahun Terbit Buku  : " << cur->tahunterbit << endl;

        cur = cur->next;
    }
    
}