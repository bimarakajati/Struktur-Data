#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

struct Qlist
{
    node *head;
    node *tail;
};

int maxx = 5;

int countLinkedList(Qlist *list)
{
    node *cur;
    if (list->head == NULL)
    {
        return 0;
    }
    else
    {
        int angka = 0;
        cur = list->head;
        while (cur != NULL)
        {
            cur = cur->next;
            angka++;
        }
        return angka;
    }
}

bool isFull(Qlist *list)
{
    if (countLinkedList(list) == maxx)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty(Qlist *list)
{
    if (countLinkedList(list) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Enqueue(Qlist *list, int x)
{
    node *temp;
    if (isFull(list))
    {
        cout << "Antrian penuh" << endl;
    }
    else
    {
        if (isEmpty(list))
        {
            list->head = new node();
            list->head->data = x;
            list->head->next = NULL;
            list->tail = list->head;
        }
        else
        {
            temp = new node();
            temp->data = x;
            temp->next = NULL;
            list->tail->next = temp;
            list->tail = temp;
        }
    }
}
/*
void Enqueue(Qlist *list, int x){
    node *temp;
    temp = new node();
    temp->data = x;
    temp->next = NULL;
    list->tail->next = temp;
    list->tail = temp;
}*/

void Dequeue(Qlist *list)
{
    node *hapus;
    if (isEmpty(list))
    {
        cout << "Antrian kosong" << endl;
    }
    else
    {
        hapus = list->head;
        list->head = list->head->next;
        hapus->next = NULL;
        delete hapus;
    }
}

void cetak(Qlist *list)
{
    node *cur;
    cur = list->head;
    if (isEmpty(list))
    {
        cout << "Queue masih kosong, buat baru terlebih dahulu" << endl;
    }
    else
    {
        while (cur != NULL)
        {
            cout << "[" << cur->data << "]";
            if (cur->next == NULL)
            {
                break;
            }
            cur = cur->next;
            cout << "->";
        }
    }
}

int main()
{
    Qlist *list;
    list = new Qlist();
    // BuatQueue(list, 4);
    Enqueue(list, 5);
    Enqueue(list, 6);
    Enqueue(list, 7);
    Enqueue(list, 8);
    Enqueue(list, 9);
    Dequeue(list);
    cetak(list);
}