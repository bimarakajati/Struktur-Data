#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct LinkedList
{
    Node *head;
};

void createSingleLinkedList(LinkedList *list, int value)
{
    Node *node;
    node = new Node();
    node->data = value;
    if (list->head == NULL)
    {
        list->head = node;
    }
}

void InsertDepan(LinkedList *list, int value)
{
    Node *node;
    node = (Node *)new (Node);
    if (list->head == NULL)
        cout << "Daftar kosong, silakan buat daftar baru" << endl;
    else
    {
        node->data = value;
        node->next = list->head;
        list->head = node;
    }
}

void FirstElement(LinkedList *list)
{
    cout << "First Element  : " << list->head->data << endl;
}

void LastElement(LinkedList *list)
{
    Node *temp;
    temp = list->head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    cout << "Last Element   : " << temp->data << endl;
}

void cetak(LinkedList *list)
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
    LinkedList *list;
    list = new LinkedList();
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