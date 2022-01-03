#include <iostream>
using namespace std;

struct node
{
    string posisi;
    string nama;
    node *next, *child;
} * head, *tail;

// var bantu
node *strikerTail, *midTail, *defTail;
node *pos, *tmp, *hapus, *prevv;
int Keeper = 0;
int Pemain = 0;
int maxPemain = 11;

// buat posisi
void buat_posisi(node *tmp, string posisi)
{
    tmp = new node;
    tmp->posisi = posisi;
    tmp->next = NULL;
    tmp->child = NULL;
    if (head == NULL)
    {
        head = tmp;
        tail = head;
    }
    else
    {
        tail->next = tmp;
        tail = tmp;
    }
}

// alokasi pemain
node *alokasi(string databaru)
{
    tmp = new node;
    tmp->nama = databaru;
    tmp->child = NULL;
    return tmp;
}

// striker
void tambah_striker(node *Node, string player)
{
    if (Pemain != maxPemain)
    {
        pos = head;
        while (pos != NULL)
        {
            if (pos->posisi == "Striker")
            {
                Node = alokasi(player);
                if (strikerTail == NULL)
                {
                    pos->child = Node;
                    strikerTail = Node;
                }
                else
                {
                    strikerTail->child = Node;
                    strikerTail = Node;
                }
                Pemain += 1;
            }
            pos = pos->next;
        }
    }
    else
    {
        printf("Total pemain maksimal 11!\n");
    }
}
void hapus_striker(string player)
{
    pos = head;
    while (pos != NULL)
    {
        if (pos->posisi == "Striker")
        {
            tmp = pos;
            if (player == strikerTail->nama)
            {
                while (tmp->child != strikerTail)
                {
                    tmp = tmp->child;
                }
                hapus = tmp->child;
                tmp->child = NULL;
                delete hapus;
            }
            else
            {
                while (tmp != NULL)
                {
                    if (tmp->child->nama == player)
                    {
                        prevv = tmp;
                    }
                    if (tmp->nama == player)
                    {
                        hapus = tmp;
                        break;
                    }
                    tmp = tmp->child;
                }
                prevv->child = hapus->child;
                hapus->child = NULL;
                delete hapus;
            }
        }
        pos = pos->next;
    }
}

// midfielder
void tambah_midfielder(node *tmp, string nama)
{
    if (Pemain != maxPemain)
    {
        pos = head;
        while (pos != NULL)
        {
            if (pos->posisi == "Midfielder")
            {
                tmp = alokasi(nama);
                if (midTail == NULL)
                {
                    pos->child = tmp;
                    midTail = tmp;
                }
                else
                {
                    midTail->child = tmp;
                    midTail = tmp;
                }
                Pemain += 1;
            }
            pos = pos->next;
        }
    }
    else
    {
        printf("Total pemain maksimal 11!\n");
    }
}
void hapus_midfielder();

// defender
void tambah_defender(node *tmp, string nama)
{
    if (Pemain != maxPemain)
    {
        pos = head;
        while (pos != NULL)
        {
            if (pos->posisi == "Defender")
            {
                tmp = alokasi(nama);
                if (defTail == NULL)
                {
                    pos->child = tmp;
                    defTail = tmp;
                }
                else
                {
                    defTail->child = tmp;
                    defTail = tmp;
                }
                Pemain += 1;
            }
            pos = pos->next;
        }
    }
    else
    {
        printf("Total pemain maksimal 11!\n");
    }
}
void hapus_defender();

// subtitusi
void subtitusi_striker();
void subtitusi_midfielder();
void subtitusi_defender();

// tampil
void tampil_striker();
void tampil_midfielder();
void tampil_defender();
void tampil_pemain()
{
    tmp = head->next;
    while (tmp != NULL)
    {
        pos = tmp->child;
        cout << tmp->posisi << ": ";
        while (pos != NULL)
        {
            cout << "[" << pos->nama << "]";
            if (pos->child == NULL)
            {
                break;
            }
            printf(" -> ");
            pos = pos->child;
        }
        printf("\n");
        tmp = tmp->next;
    }
    cout << "Total pemain: " << Pemain;
}
void hapus_pemain();
void cari_pemain();

// etc
void tambah_goalkeeper(node *tmp, string nama)
{
    if (Pemain != maxPemain)
    {
        if (Keeper == 0)
        {
            pos = head;
            while (pos != NULL)
            {
                if (pos->posisi == "Goalkeeper")
                {
                    tmp = alokasi(nama);
                    pos->child = tmp;
                    Keeper = 1;
                }
                pos = pos->next;
            }
            Pemain += 1;
        }
        else
        {
            printf("Kiper maksimal 1!\n");
        }
    }
    else
    {
        printf("Total pemain maksimal 11!\n");
    }
}
void tampil_posisi()
{
    tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->posisi << " -> ";
        tmp = tmp->next;
    }
}

// main
int main()
{
    node *list;

    buat_posisi(list, "Head");
    buat_posisi(list, "Striker");
    buat_posisi(list, "Midfielder");
    buat_posisi(list, "Defender");
    buat_posisi(list, "Goalkeeper");

    // formasi 2-4-4
    tambah_goalkeeper(list, "keep1");
    tambah_goalkeeper(list, "keep2"); // kiper maks 1

    tambah_striker(list, "stiker1");
    tambah_striker(list, "stiker2");

    hapus_striker("striker1");
    cout << "Tail: " << strikerTail->nama << endl;

    tambah_midfielder(list, "mid1");
    tambah_midfielder(list, "mid2");
    tambah_midfielder(list, "mid3");
    tambah_midfielder(list, "mid4");

    tambah_defender(list, "def1");
    tambah_defender(list, "def2");
    tambah_defender(list, "def3");
    tambah_defender(list, "def4");
    // tambah_defender(list, "def5"); // total pemain maks 11

    // tampil_posisi();
    tampil_pemain();
}