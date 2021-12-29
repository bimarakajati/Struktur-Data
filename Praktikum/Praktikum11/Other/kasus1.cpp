// Bima Rakajati
// A11.2020.13088
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

typedef struct node *Node;

struct List
{
    node *TOP;
};

typedef struct List *Stack;

void Push(Stack *temp, int x)
{
    if (Node == NULL)
    {
        temp = new Node;
        temp->data = x;
        if (TOP == NULL)
        {
            TOP = temp;
        }
        else
        {
            temp = TOP;
        }
        temp->next = TOP;
        TOP = temp;
    }
}

void Pop(Stack *Hapus)
{
    if (Node != NULL)
    {
        Hapus = TOP;
        TOP = TOP->next;
        Hapus->next = NULL;
        delete Hapus;
    }
}

void cetak()
{
    Stack *temp = TOP;
    while (temp != TOP)
    {
        cout << temp->data;
        temp = temp->next;
    }
}        

int main()
{
    cout << endl;
    return 0;
}