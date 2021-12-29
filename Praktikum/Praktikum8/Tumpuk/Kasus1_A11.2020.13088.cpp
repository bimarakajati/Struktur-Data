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

void FirstElement()
{
    cout << "Elemen pertama     : " << Head->data << endl;
}

void LastElement()
{
    node *temp;
    temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    cout << "Elemen terakhir    : " << temp->data << endl;
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

    FirstElement();
    LastElement();

    cout << endl;
    return 0;
}