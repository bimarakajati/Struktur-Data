#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
} *Head;

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
    return 0;
}