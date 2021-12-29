#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *head;
};

void createSingleLinkedList(Node *list, int x)
{
    Node *node;
    node = new Node();
    node->data = x;
    if (list->head == NULL)
    {
        list->head = node;
    }
}

void InsertDepan(Node *list, int x)
{
    Node *node;
    node = (Node *)new (Node);
    if (list->head == NULL)
        cout << "Daftar kosong, silakan buat daftar baru" << endl;
    else
    {
        node->data = x;
        node->next = list->head;
        list->head = node;
    }
}

void FirstElement(Node *list)
{
    cout << "First Element  : " << list->head->data << endl;
}

void LastElement(Node *list)
{
    Node *temp;
    temp = list->head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    cout << "Last Element   : " << temp->data << endl;
}

void cetak(Node *list)
{
    Node *temp;
    temp = list->head;
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
    Node *list;
    list = new Node();
    createSingleLinkedList(list, 0);

    cout << endl;

    InsertDepan(list, 1);
    cetak(list);

    cout << endl;

    FirstElement(list);
    LastElement(list);

    cout << endl;
    return 0;
}