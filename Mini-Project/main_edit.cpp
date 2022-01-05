#include <iostream>
using namespace std;
#define Max 11

struct node
{
    string posisi;
    string nama;
    node *next, *child;
} * head, *tail;

// tail child
node *strikeTail, *midTail, *defTail, *goalTail;
// var bantu
int Pemain = 0;
int maxPemain = Max;

bool cekSemuaPemain(string namaPemain)
{
    node *pos, *tmp;
    bool ketemu = false;
    pos = head->next;
    while (pos != NULL) // cek posisi
    {
        tmp = pos;
        while (tmp != NULL) // cek child
        {
            if (namaPemain == tmp->nama)
            {
                ketemu = true;
                return ketemu;
            }
            tmp = tmp->child;
        }
        pos = pos->next;
    }
    if (!ketemu)
    {
        return ketemu;
    }
    return 0;
}

bool cekNamaPemain(string namaPemain, string posisi)
{
    node *pos, *tmp;
    bool ketemu = false;
    pos = head;
    while (pos != NULL)
    {
        if (pos->posisi == posisi) // cek posisi
        {
            tmp = pos->child;
            while (tmp != NULL) // cek child
            {
                if (tmp->nama == namaPemain)
                {
                    ketemu = true;
                    return ketemu;
                }
                tmp = tmp->child;
            }
        }
        pos = pos->next;
    }
    if (!ketemu)
    {
        return ketemu;
    }
    return 0;
}

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
    node *tmp;
    tmp = new node;
    tmp->nama = databaru;
    tmp->child = NULL;
    return tmp;
}

// tambah
void tambah(node *newNode, string newPlayer, string posisi)
{
    if (Pemain != maxPemain)
    {
        if (cekSemuaPemain(newPlayer))
        {
            printf("Pemain sudah ada");
        }
        else
        {
            node *pos;
            pos = head;
            while (pos != NULL)
            {
                if (pos->posisi == posisi)
                {
                    newNode = alokasi(newPlayer);
                    if (posisi == "Striker")
                    {
                        if (strikeTail == NULL)
                        {
                            pos->child = newNode;
                            strikeTail = newNode;
                        }
                        else
                        {
                            strikeTail->child = newNode;
                            strikeTail = newNode;
                        }
                    }
                    else if (posisi == "Midfielder")
                    {
                        if (midTail == NULL)
                        {
                            pos->child = newNode;
                            midTail = newNode;
                        }
                        else
                        {
                            midTail->child = newNode;
                            midTail = newNode;
                        }
                    }
                    else if (posisi == "Defender")
                    {
                        if (defTail == NULL)
                        {
                            pos->child = newNode;
                            defTail = newNode;
                        }
                        else
                        {
                            defTail->child = newNode;
                            defTail = newNode;
                        }
                    }
                    else // Goalkeeper
                    {
                        if (goalTail == NULL)
                        {
                            pos->child = newNode;
                            goalTail = newNode;
                        }
                        else
                        {
                            goalTail->child = newNode;
                            goalTail = newNode;
                        }
                    }
                }
                pos = pos->next;
            }
            Pemain += 1;
        }
    }
    else
    {
        printf("Total pemain maksimal 11!\n");
    }
}
void tambah_striker(node *newNode, string newPlayer)
{
    tambah(newNode, newPlayer, "Striker");
}
void tambah_midfielder(node *newNode, string newPlayer)
{
    tambah(newNode, newPlayer, "Midfielder");
}
void tambah_defender(node *newNode, string newPlayer)
{
    tambah(newNode, newPlayer, "Defender");
}
void tambah_goalkeeper(node *newNode, string newPlayer)
{
    tambah(newNode, newPlayer, "Goalkeeper");
}

// hapus
void del(string namaPemain, string posisi)
{
    if (!cekNamaPemain(namaPemain, posisi))
    {
        printf("Nama tidak ditemukan");
    }
    else
    {
        node *pos, *tmp, *prev, *hapus;
        pos = head;
        while (pos != NULL)
        {
            if (pos->posisi == posisi)
            {
                tmp = pos;
                // kondisi apabila nama player == tail
                if (posisi == "Striker") // akhir striker
                {
                    if (namaPemain == strikeTail->nama)
                    {
                        while (tmp->child != strikeTail)
                        {
                            tmp = tmp->child;
                        }
                        hapus = tmp->child;
                        prev = tmp;
                        prev->child = NULL;
                        delete hapus;
                        break;
                    }
                }
                else if (posisi == "Midfielder") // akhir midfielder
                {
                    if (namaPemain == midTail->nama)
                    {
                        while (tmp->child != midTail)
                        {
                            tmp = tmp->child;
                        }
                        hapus = tmp->child;
                        prev = tmp;
                        prev->child = NULL;
                        delete hapus;
                        break;
                    }
                }
                else // akhir defender
                {
                    if (namaPemain == defTail->nama)
                    {
                        while (tmp->child != defTail)
                        {
                            tmp = tmp->child;
                        }
                        hapus = tmp->child;
                        prev = tmp;
                        prev->child = NULL;
                        delete hapus;
                        break;
                    }
                }
                while (tmp != NULL) // awal tengah
                {
                    if (tmp->child->nama == namaPemain)
                    {
                        prev = tmp;
                        hapus = prev->child;
                        break;
                    }
                    tmp = tmp->child;
                }
                prev->child = hapus->child;
                hapus->child = NULL;
                delete hapus;
            }
            pos = pos->next;
        }
        Pemain -= 1;
    }
}
void hapus_striker(string namaPemain)
{
    del(namaPemain, "Striker");
}
void hapus_midfielder(string namaPemain)
{
    del(namaPemain, "Midfielder");
}
void hapus_defender(string namaPemain)
{
    del(namaPemain, "Defender");
}

// subtitusi
void subtitusi(node *newNode, string oldPlayer, string newPlayer, string posisi)
{
    if (!cekNamaPemain(oldPlayer, posisi))
    {
        printf("Nama tidak ditemukan");
    }
    else
    {
        if (cekSemuaPemain(newPlayer))
        {
            printf("Pemain sudah ada");
        }
        else
        {
            node *pos, *tmp, *hapus, *prev;
            pos = head;
            while (pos != NULL)
            {
                tmp = pos;
                if (pos->posisi == posisi)
                {
                    // kondisi apabila nama player == tail
                    if (pos->posisi == "Striker")
                    {
                        if (oldPlayer == strikeTail->nama)
                        {
                            while (tmp->child != strikeTail)
                            {
                                tmp = tmp->child;
                            }
                            hapus = tmp->child;
                            newNode = alokasi(newPlayer);
                            tmp->child = newNode;
                            delete hapus;
                            break;
                        }
                    }
                    else if (pos->posisi == "Midfielder")
                    {
                        if (oldPlayer == midTail->nama)
                        {
                            while (tmp->child != midTail)
                            {
                                tmp = tmp->child;
                            }
                            hapus = tmp->child;
                            newNode = alokasi(newPlayer);
                            tmp->child = newNode;
                            delete hapus;
                            break;
                        }
                    }
                    else
                    {
                        if (oldPlayer == defTail->nama)
                        {
                            while (tmp->child != defTail)
                            {
                                tmp = tmp->child;
                            }
                            hapus = tmp->child;
                            newNode = alokasi(newPlayer);
                            tmp->child = newNode;
                            delete hapus;
                            break;
                        }
                    }
                    while (tmp != NULL) // awal/tengah
                    {
                        if (tmp->child->nama == oldPlayer)
                        {
                            prev = tmp;
                            hapus = prev->child;
                            break;
                        }
                        tmp = tmp->child;
                    }
                    newNode = alokasi(newPlayer);
                    prev->child = newNode;
                    newNode->child = hapus->child;
                    hapus->child = NULL;
                    delete hapus;
                }
                pos = pos->next;
            }
        }
    }
}
void subtitusi_striker(node *newNode, string oldPlayer, string newPlayer)
{
    subtitusi(newNode, oldPlayer, newPlayer, "Striker");
}
void subtitusi_midfielder(node *newNode, string oldPlayer, string newPlayer)
{
    subtitusi(newNode, oldPlayer, newPlayer, "Midfielder");
}
void subtitusi_defender(node *newNode, string oldPlayer, string newPlayer)
{
    subtitusi(newNode, oldPlayer, newPlayer, "Defender");
}

// tampil
void tampil(string posisi)
{
    node *pos, *tmp;
    pos = head;
    while (pos != NULL)
    {
        if (pos->posisi == posisi)
        {
            cout << pos->posisi << ": ";
            tmp = pos->child;
            while (tmp != NULL)
            {
                cout << "[" << tmp->nama << "]";
                if (tmp->child == NULL)
                {
                    break;
                }
                printf(" -> ");
                tmp = tmp->child;
            }
            printf("\n");
            break;
        }
        pos = pos->next;
    }
}
void tampil_striker()
{
    tampil("Striker");
}
void tampil_midfielder()
{
    tampil("Midfielder");
}
void tampil_defender()
{
    tampil("Defender");
}
void tampil_pemain()
{
    node *pos, *tmp;
    pos = head->next;
    while (pos != NULL)
    {
        tmp = pos->child;
        cout << pos->posisi << ": ";
        while (tmp != NULL)
        {
            cout << "[" << tmp->nama << "]";
            if (tmp->child == NULL)
            {
                break;
            }
            printf(" -> ");
            tmp = tmp->child;
        }
        printf("\n");
        pos = pos->next;
    }
    cout << "Total pemain: " << Pemain << endl;
}

void hapus_pemain()
{
    node *pos, *tmp, *hapus;
    pos = head;
    while (pos != NULL)
    {
        while (pos->child != NULL)
        {
            tmp = pos;
            while (tmp->child->child != NULL)
            {
                tmp = tmp->child;
            }
            hapus = tmp->child;
            tmp->child = NULL;
            delete hapus;
        }
        pos = pos->next;
    }
}

void cari_pemain(string nama)
{
    node *pos, *tmp;
    bool ketemu = false;
    pos = head->next;
    while (pos != NULL)
    {
        tmp = pos->child;
        while (tmp != NULL)
        {
            if (tmp->nama == nama)
            {
                cout << "[" << tmp->nama << "]"
                     << " ada di posisi " << pos->posisi << endl;
                ketemu = true;
                break;
            }
            tmp = tmp->child;
        }
        pos = pos->next;
    }
    if (!ketemu)
    {
        printf("Nama pemain tidak ditemukan\n");
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

    tambah_goalkeeper(list, "keeper1");

    tambah_striker(list, "striker1");
    tambah_striker(list, "striker2");
    // tambah_striker(list, "striker3");
    // hapus_striker("striker2");
    // subtitusi_striker(list, "striker2", "strikerBaru");

    tambah_midfielder(list, "mid1");
    tambah_midfielder(list, "mid2");
    tambah_midfielder(list, "mid3");
    tambah_midfielder(list, "mid4");
    // tambah_midfielder(list, "mid5");
    // hapus_midfielder("mid4");
    // subtitusi_midfielder(list, "mid2", "midBaru");

    tambah_defender(list, "def1");
    tambah_defender(list, "def2");
    tambah_defender(list, "def3");
    tambah_defender(list, "def4");
    // tambah_defender(list, "def5");
    // hapus_defender("def2");
    // subtitusi_defender(list, "def1", "defBaru");

    tampil_pemain();
    // tampil_striker();
    // tampil_midfielder();
    // tampil_defender();

    // cari_pemain("def4");
    // cari_pemain("def10");

    // hapus_pemain();
    // tampil_pemain();
    return 0;
}