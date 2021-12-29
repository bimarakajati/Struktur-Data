// Bima Rakajati
// A11.2020.13088
#include <iostream>
using namespace std;

struct Tnode
{
    int data;
    Tnode *next;
    Tnode *prev;
} * head, *tail;

void init()
{
    head = NULL;
    tail = NULL;
}

Tnode *alokasi(int databaru)
{
    Tnode *baru;
    baru = new Tnode;
    baru->data = databaru;
    baru->next = NULL;
    baru->prev = NULL;
    return baru;
}

int IsEmpty()
{
    if (head == NULL)
        return 1;
    else
        return 0;
}

void insertDepan(int databaru)
{
    Tnode *baru;
    baru = alokasi(databaru);
    if (IsEmpty() == 1)
    {
        head = baru;
        head->next = NULL;
        head->prev = NULL;
        tail = baru;
        tail->next = NULL;
        tail->prev = NULL;
    }
    else
    {
        baru->next = head;
        head->prev = baru;
        head = baru;
    }
    // printf("Data masuk\n");
}

void insertBelakang(int databaru)
{
    Tnode *baru;
    baru = alokasi(databaru);
    if (IsEmpty() == 1) // depan
    {
        insertDepan(databaru);
    }
    else
    {
        tail->next = baru;
        tail->prev = baru;
        tail = baru;
    }
    // printf("Data masuk\n");
}

void tampil()
{
    Tnode *bantu;
    bantu = head;
    if (IsEmpty() == 0)
    {
        while (bantu != NULL)
        {
            cout << "[" << bantu->data << "]";
            if (bantu->next == NULL) // ngebreak biar ga ngeprint "->" lagi
            {
                break;
            }
            bantu = bantu->next;
            printf("->");
        }
        printf("\n");
    }
    else
        printf("Masih kosong\n");
}

int main()
{
    init(); // inisialisasi head & tail

    insertDepan(1);
    insertDepan(2);
    insertDepan(3);
    tampil();

    cout << "Data tail: " << tail->data << endl;

    insertBelakang(10);
    insertBelakang(11);
    insertBelakang(12);
    tampil();

    cout << "Data tail: " << tail->data << endl;

    return 0;
}