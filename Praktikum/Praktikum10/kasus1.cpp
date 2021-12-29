// Bima Rakajati
// A11.2020.13088
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

typedef struct node Stack;
Stack *Head;

void createSingleLinkedList(int x)
{
    node *temp;
    temp = new node();
    temp->data = x;
    if (Head == NULL)
    {
        Head = temp;
    }
}

void InsertDepan(int x)
{
    node *temp;
    temp = new node();
    if (Head == NULL)
        cout << "Daftar kosong, silakan buat daftar baru terlebih dahulu" << endl;
    else
    {
        temp->data = x;
        temp->next = Head;
        Head = temp;
    }
}

void InsertBelakang(int x)
{
    node *temp, *bantu;
    temp = new node();
    if (Head == NULL)
        cout << "Daftar kosong, silakan buat daftar baru terlebih dahulu" << endl;
    else
    {
        temp->data = x;
        bantu = Head;
        while (bantu->next != NULL)
        {
            bantu = bantu->next;
        }
        bantu->next = temp;
    }
}

void InsertIntermediate(int x, int pos)
{
    node *temp, *bantu;
    temp = new node();
    if (Head == NULL)
        cout << "Daftar kosong, silakan buat daftar baru terlebih dahulu" << endl;
    else
    {
        temp->data = x;
        bantu = Head;
        int nomor = 1;
        while (nomor < pos - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        temp->next = bantu->next;
        bantu->next = temp;
    }
}

void HapusDepan()
{
    node *Hapus;
    Hapus = Head;
    Head = Head->next;
    delete Hapus;
}

void HapusBelakang()
{
    node *Hapus, *temp;
    Hapus = Head;
    while (Hapus != NULL)
    {
        if (Hapus->next != NULL)
        {
            temp = Hapus;
        }
        Hapus = Hapus->next;
    }
    temp->next = NULL;
    delete Hapus;
}

void HapusIntermediate(int x)
{
    node *temp, *pre_hapus, *Hapus;
    int nomor = 1;
    temp = Head;
    while (nomor <= x)
    {
        if (nomor == x - 1)
        {
            pre_hapus = temp;
        }
        if (nomor == x)
        {
            Hapus = temp;
        }
        temp = temp->next;
        nomor++;
    }
    pre_hapus->next = temp;
    delete Hapus;
}

void cetak()
{
    node *temp;
    temp = Head;
    while (temp->next != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << temp->data << " -> ";
    cout << "NULL" << endl;
}

int main()
{
    // InsertDepan(0);
    createSingleLinkedList(0);

    InsertDepan(1);
    cetak();

    cout << endl;

    InsertDepan(2);
    cetak();

    cout << endl;

    InsertBelakang(3);
    cetak();

    cout << endl;

    HapusDepan();
    HapusBelakang();
    cetak();

    cout << endl;

    InsertIntermediate(4, 1);
    cetak();

    cout << endl;

    HapusIntermediate(2);
    cetak();

    cout << endl;
    return 0;
}