// Bima Rakajati
// A11.2020.13088
#include <iostream>
using namespace std;
#define Max 5

struct node
{
    int data;
    node *next;
};
typedef struct node Node;
Node *TOP = NULL;

int maxStack = Max;

int numberOfElement()
{
    node *temp = TOP;
    int count = 0;
    while (temp != NULL)
    {
        count += 1;
        temp = temp->next;
    }
    return count;
}

node *alokasi(node *temp, int x)
{
    node *newNode;
    newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

bool isFull()
{
    if (numberOfElement() == maxStack)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty()
{
    if (TOP == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(node *S, int x)
{
    node *temp;
    temp = alokasi(S, x);
    if (isFull())
    {
        cout << "stack penuh" << endl;
    }
    else
    {
        if (isEmpty())
        {
            TOP = temp;
        }
        else
        {
            temp->next = TOP;
            TOP = temp;
        }
    }
}

void pop(node *Hapus)
{
    Hapus = TOP;
    if (TOP == NULL)
    {
        cout << "stack kosong" << endl;
    }
    else
    {
        TOP = TOP->next;
        Hapus->next = NULL;
        delete Hapus;
    }
}

void cetak()
{
    node *temp = TOP;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *temp;
    push(temp, 10);
    push(temp, 20);
    push(temp, 30);
    push(temp, 40);
    push(temp, 50);
    push(temp, 60);
    cetak();

    return 0;
}