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
    Tnode *baru, *bantu;
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
        bantu = head;
        while (bantu->next != NULL)
        {
            bantu = bantu->next;
        }
        bantu->next = baru;
        tail->next = baru;
        baru->prev = bantu;
        tail->prev = bantu;
        tail = baru;
    }
    // printf("Data masuk\n");
}

void insertTengah(int pos, int databaru)
{
    Tnode *baru, *current;
    baru = alokasi(databaru);
    if (pos == 1)
    {
        insertDepan(databaru);
    }
    else
    {
        current = head;
        for (int i = 0; i < pos - 2; i++)
        {
            current = current->next;
        }
        baru->prev = current;
        baru->next = current->next;
        if (current->next != NULL)
        {
            current->next = baru;
            baru->next->prev = baru;
        }
        else
        {
            insertBelakang(databaru);
            // current->next = baru;
            // tail = baru;
        }
    }
}

void hapusTengah(int x) // hapus data
{
    Tnode *Hapus;
    if (IsEmpty() == 1)
    {
        cout << "Masih kosong" << endl;
    }
    else
    {
        Hapus = head;
        while (Hapus != NULL)
        {
            if (Hapus->data == x) // ketemu
            {
                if (Hapus == head) // hapus awal
                {
                    head = head->next;
                    head->prev = NULL;
                    Hapus->next = NULL;
                    delete Hapus;
                    break;
                }
                else if (Hapus == tail) // hapus akhir
                {
                    tail = tail->prev;
                    tail->next = NULL;
                    Hapus->prev = NULL;
                    delete Hapus;
                    break;
                }
                else // hapus tengah
                {
                    Hapus->prev->next = Hapus->next;
                    Hapus->next->prev = Hapus->prev;
                    Hapus->next = NULL;
                    Hapus->prev = NULL;
                    delete Hapus;
                    break;
                }
            }
            else
            {
                Hapus = Hapus->next;
            }
        }
    }
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

    insertTengah(1, 39); // awal
    insertTengah(3, 69); // posisi 3
    insertTengah(6, 99); // akhir
    tampil();

    insertBelakang(10);
    insertBelakang(11);
    insertBelakang(12);
    tampil();

    hapusTengah(39); // awal
    hapusTengah(69); // tengah
    hapusTengah(12); // akhir
    tampil();

    cout << "Data head: " << head->data << endl;
    cout << "Data tail: " << tail->data << endl;

    return 0;
}