#include <iostream>
using namespace std;

struct Buku
{
    // komponen 
    string judul, pengarang;
    int tahunterbit;

    Buku *next;
};

Buku *head, *tail, *cur, *newNode, *del, *before;

void menuOption()
{
    cout << "\nMain Menu Single Linked List" << endl;
    cout << "1. Add First" << endl;
    cout << "2. Add Middle" << endl;
    cout << "3. Add Last" << endl;
    cout << "4. Remove First" << endl;
    cout << "5. Remove Middle" << endl;
    cout << "6. Remove Last" << endl;
    cout << "7. Change First" << endl;
    cout << "8. Change Middle" << endl;
    cout << "9. Change Last" << endl;
    cout << "10. Show Data" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice   : ";
}

// buat single linked list
void createSingleLinkedList(string judul, string pengarang, int tB)
{
    head = new Buku();
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunterbit = tB;
    head->next = NULL;
    tail = head;
}

// hitung single linked list
int countSingleLinkedList()
{
    cur = head;
    int jumlah = 0;
    while (cur != NULL)
    {
        jumlah++;
        cur = cur->next;
    }
    return jumlah;
}

// tambah awal single linked list
void addFirst(string judul, string pengarang, int tB)
{
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunterbit = tB;
    newNode->next = head;
    head = newNode;
}

// tambah akhir single linked list
void addLast(string judul, string pengarang, int tB)
{
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunterbit = tB;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

// tambah tengah single linked list
void addMiddle(string judul, string pengarang, int tB, int posisi)
{
    if (posisi < 1 || posisi > countSingleLinkedList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        newNode = new Buku();
        newNode->judul = judul;
        newNode->pengarang = pengarang;
        newNode->tahunterbit = tB;

        // tranversing
        cur = head;
        int nomor = 1;
        while (nomor < posisi - 1)
        {
            cur = cur->next;
            nomor++;
        }

        newNode->next = cur->next;
        cur->next = newNode;
    }
}

// hapus awal single linked list
void removeFirst()
{
    del = head;
    head = head->next;
    delete del;
}

// hapus akhir single linked list
void removeLast()
{
    del = tail;
    cur = head;
    while (cur->next != tail)
    {
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;
}

// hapus tengah single linked list
void removeMiddle(int posisi)
{
    if (posisi < 1 || posisi > countSingleLinkedList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1 || posisi == countSingleLinkedList())
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        int nomor = 1;
        cur = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                before = cur;
            }
            if (nomor == posisi)
            {
                del = cur;
            }
            cur = cur->next;
            nomor++;
        }
        before->next = cur;
        delete del;
    }
}

// ubah awal single linked list
void changeFirst(string judul, string pengarang, int tB)
{
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunterbit = tB;
}

// ubah akhir single linked list
void changeLast(string judul, string pengarang, int tB)
{
    tail->judul = judul;
    tail->pengarang = pengarang;
    tail->tahunterbit = tB;
}

// ubah tengah single linked list
void changeMiddle(string judul, string pengarang, int tB, int posisi)
{
    if (posisi < 1 || posisi > countSingleLinkedList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1 || posisi == countSingleLinkedList())
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        cur = head;
        int nomor = 1;
        while (nomor < posisi)
        {
            cur = cur->next;
            nomor++;
        }
        cur->judul = judul;
        cur->pengarang = pengarang;
        cur->tahunterbit = tB;
    }
}

// cetak single linked list
void printSingleLinkedList()
{
    cout << "\n";
    cout << "Jumlah data ada     : " << countSingleLinkedList() << endl;
    cur = head;
    int nomor = 1;
    while (cur != NULL)
    {
        cout << "Data ke-" << nomor << endl;
        cout << "-Judul Buku         : " << cur->judul << endl;
        cout << "-Pengarang Buku     : " << cur->pengarang << endl;
        cout << "-Tahun Terbit Buku  : " << cur->tahunterbit << endl;

        cur = cur->next;
        nomor++;
    }
}

int main()
{
    createSingleLinkedList("Bima", "Rakajati", 2021);

    int option, thn, pss;
    string jdl, pngrng;
    system("cls");
    do
    {
        menuOption();
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Masukkan Judul         : ";
            cin >> jdl;
            cout << "Masukkan Pengarang     : ";
            cin >> pngrng;
            cout << "Masukkan Tahun Terbit  : ";
            cin >> thn;
            addFirst(jdl, pngrng, thn);
            break;
        case 2:
            cout << "Masukkan Judul         : ";
            cin >> jdl;
            cout << "Masukkan Pengarang     : ";
            cin >> pngrng;
            cout << "Masukkan Tahun Terbit  : ";
            cin >> thn;
            cout << "Masukkan Posisi        : ";
            cin >> pss;
            addMiddle(jdl, pngrng, thn, pss);
            break;
        case 3:
            cout << "Masukkan Judul         : ";
            cin >> jdl;
            cout << "Masukkan Pengarang     : ";
            cin >> pngrng;
            cout << "Masukkan Tahun Terbit  : ";
            cin >> thn;
            addLast(jdl, pngrng, thn);
            break;
        case 4:
            removeFirst();
            break;
        case 5:
            cout << "Masukkan Posisi        : ";
            cin >> pss;
            removeMiddle(pss);
            break;
        case 6:
            removeLast();
            break;
        case 7:
            cout << "Masukkan Judul         : ";
            cin >> jdl;
            cout << "Masukkan Pengarang     : ";
            cin >> pngrng;
            cout << "Masukkan Tahun Terbit  : ";
            cin >> thn;
            changeFirst(jdl, pngrng, thn);
            break;
        case 8:
            cout << "Masukkan Judul         : ";
            cin >> jdl;
            cout << "Masukkan Pengarang     : ";
            cin >> pngrng;
            cout << "Masukkan Tahun Terbit  : ";
            cin >> thn;
            cout << "Masukkan Posisi        : ";
            cin >> pss;
            changeMiddle(jdl, pngrng, thn, pss);
            break;
        case 9:
            cout << "Masukkan Judul         : ";
            cin >> jdl;
            cout << "Masukkan Pengarang     : ";
            cin >> pngrng;
            cout << "Masukkan Tahun Terbit  : ";
            cin >> thn;
            changeLast(jdl, pngrng, thn);
            break;
        case 10:
            printSingleLinkedList();
            break;
        }
    } while (option > 0 && option <= 10);
    return 0;
}