#include <iostream>
using namespace std;

struct node
{
    string posisi;
    string nama;
    node *next, *child;
} * head, *tail;

// var bantu
node *pos, *tmp, *prevv, *hapus;
// tail child
node *strikerTail, *midTail, *defTail, *goalTail;

bool cekSemuaPemain(string namaPemain)
{
    pos = head->next;
    bool ketemu = false;
    while (pos != NULL) // cek posisi
    {
        tmp = pos;
        while (tmp != NULL) // cek child
        {
            if (namaPemain == tmp->nama)
            {
                ketemu = true;
                return true;
            }
            tmp = tmp->child;
        }
        pos = pos->next;
    }
    if (!ketemu)
    {
        return false;
    }
    return 0;
}

bool cekNamaPemain(string namaPemain, string posisi)
{
    pos = head;
    bool ketemu = false;
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
                    return true;
                }
                tmp = tmp->child;
            }
        }
        pos = pos->next;
    }
    if (!ketemu)
    {
        return false;
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
    if (cekSemuaPemain(newPlayer))
    {
        printf("Pemain sudah ada");
    }
    else
    {
        pos = head;
        while (pos != NULL)
        {
            if (pos->posisi == posisi)
            {
                newNode = alokasi(newPlayer);
                if (posisi == "Striker")
                {
                    if (strikerTail == NULL)
                    {
                        pos->child = newNode;
                        strikerTail = newNode;
                    }
                    else
                    {
                        strikerTail->child = newNode;
                        strikerTail = newNode;
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
                else // defender
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
            }
            pos = pos->next;
        }
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

// hapus
void del(string namaPemain, string posisi)
{
    if (!cekNamaPemain(namaPemain, posisi))
    {
        printf("Nama tidak ditemukan");
    }
    else
    {
        pos = head;
        while (pos != NULL)
        {
            if (pos->posisi == posisi)
            {
                tmp = pos;
                // kondisi apabila nama player == tail
                if (posisi == "Striker") // akhir striker
                {
                    if (namaPemain == strikerTail->nama)
                    {
                        while (tmp->child != strikerTail)
                        {
                            tmp = tmp->child;
                        }
                        hapus = tmp->child;
                        prevv = tmp;
                        prevv->child = NULL;
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
                        prevv = tmp;
                        prevv->child = NULL;
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
                        prevv = tmp;
                        prevv->child = NULL;
                        delete hapus;
                        break;
                    }
                }
                while (tmp != NULL) // awal tengah
                {
                    if (tmp->child->nama == namaPemain)
                    {
                        prevv = tmp;
                        hapus = prevv->child;
                        break;
                    }
                    tmp = tmp->child;
                }
                prevv->child = hapus->child;
                hapus->child = NULL;
                delete hapus;
            }
            pos = pos->next;
        }
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
            pos = head;
            while (pos != NULL)
            {
                tmp = pos;
                if (pos->posisi == posisi)
                {
                    // kondisi apabila nama player == tail
                    if (pos->posisi == "Striker")
                    {
                        if (oldPlayer == strikerTail->nama)
                        {
                            while (tmp->child != strikerTail)
                            {
                                tmp = tmp->child;
                            }
                            hapus = tmp->child;
                            newNode = new node;
                            newNode->nama = newPlayer;
                            newNode->child = NULL;
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
                            newNode = new node;
                            newNode->nama = newPlayer;
                            newNode->child = NULL;
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
                            prevv = tmp;
                            hapus = prevv->child;
                            break;
                        }
                        tmp = tmp->child;
                    }
                    newNode = alokasi(newPlayer);
                    prevv->child = newNode;
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
}

void hapusChild(node *newNode)
{
    while (newNode->child->child != NULL)
    {
        newNode = newNode->child;
    }
    hapus = newNode->child;
    newNode->child = NULL;
    delete hapus;
}

void hapus_pemain(node *newNode)
{
    pos = head;
    while (pos != NULL)
    {
        while (pos->child != NULL)
        {
            hapusChild(pos);
        }
        pos = pos->next;
    }
}

void cari_pemain(string find_player)
{
    pos = head->next;
    bool ketemu = false;
    while (pos != NULL)
    {
        tmp = pos->child;
        while (tmp != NULL)
        {
            if (tmp->nama == find_player)
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

// etc
void tambah_goalkeeper(node *newNode, string newPlayer)
{
    if (cekSemuaPemain(newPlayer))
    {
        printf("Pemain sudah ada");
    }
    else
    {
        pos = head;
        while (pos != NULL)
        {
            if (pos->posisi == "Goalkeeper")
            {
                newNode = alokasi(newPlayer);
                pos->child = newNode;
                goalTail = newNode;
            }
            pos = pos->next;
        }
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
    tambah_goalkeeper(list, "keeper1");

    tambah_striker(list, "striker1");
    tambah_striker(list, "striker2");
    tambah_striker(list, "striker3");
    // cout << strikerTail->nama << endl;
    hapus_striker("striker2");
    subtitusi_striker(list, "striker3", "strikerBaru");

    tambah_midfielder(list, "mid1");
    tambah_midfielder(list, "mid2");
    tambah_midfielder(list, "mid3");
    tambah_midfielder(list, "mid4");
    // cout << midTail->nama << endl;
    hapus_midfielder("mid4");
    subtitusi_midfielder(list, "mid2", "midBaru");

    tambah_defender(list, "def1");
    tambah_defender(list, "def2");
    tambah_defender(list, "def3");
    tambah_defender(list, "def4");
    // cout << defTail->nama << endl;
    hapus_defender("def2");
    subtitusi_defender(list, "def1", "defBaru");

    tampil_pemain();
    // tampil_striker();
    // tampil_midfielder();
    // tampil_defender();

    cari_pemain("def4");
    cari_pemain("def10");

    hapus_pemain(list);
    tampil_pemain();
    return 0;
}