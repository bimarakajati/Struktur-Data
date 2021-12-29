// Bima Rakajati
// A11.2020.13088
#include <iostream>
using namespace std;

struct Tnode
{
    int data;
    Tnode *next;
    Tnode *prev;
};

struct Dlist
{
    Tnode *head;
};

void init(Dlist *list)
{
    list->head = NULL;
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

int IsEmpty(Dlist *list)
{
    if (list->head == NULL)
        return 1;
    else
        return 0;
}

void insertDepan(Dlist *list, int databaru)
{
    Tnode *baru;
    baru = alokasi(databaru);
    if (IsEmpty(list) == 1)
    {
        list->head = baru;
        list->head->next = NULL;
        list->head->prev = NULL;
    }
    else
    {
        baru->next = list->head;
        list->head->prev = baru;
        list->head = baru;
    }
    printf("Data masuk\n");
}

void insertBelakang(Dlist *list, int databaru)
{
    Tnode *baru, *bantu;
    baru = alokasi(databaru);
    if (IsEmpty(list) == 1)
    {
        list->head = baru;
        list->head->next = NULL;
        list->head->prev = NULL;
    }
    else
    {
        bantu = list->head;
        while (bantu->next != NULL)
        {
            bantu = bantu->next;
        }
        bantu->next = baru;
        baru->prev = bantu;
    }
    printf("Data masuk\n");
}

void tampil(Dlist *list)
{
    Tnode *bantu;
    bantu = list->head;
    if (IsEmpty(list) == 0)
    {
        while (bantu != NULL)
        {
            printf("% d ", bantu->data);
            bantu = bantu->next;
        }
        printf("\n");
    }
    else
        printf("Masih kosong\n");
}

int main()
{
    Dlist *list;
    list = new Dlist();
    init(list);
    insertDepan(list, 1);
    insertDepan(list, 2);
    insertDepan(list, 3);
    tampil(list);

    insertBelakang(list, 10);
    insertBelakang(list, 11);
    insertBelakang(list, 12);
    tampil(list);

    return 0;
}