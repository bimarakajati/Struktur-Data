#include <iostream>
using namespace std;

struct Film
{
    // komponen 
    string judul, pengarang;
    int tahunrilis;

    Film *next;
};

Film *head, *tail, *cur, *newNode, *del, *before;

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
    cout << "Enter your choice  : ";
}

// buat single linked list
void createSingleLinkedList(string judul, string pengarang, int tR)
{
    head = new Film();
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunrilis = tR;
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
void addFirst(string judul, string pengarang, int tR)
{
    newNode = new Film();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunrilis = tR;
    newNode->next = head;
    head = newNode;
}

// tambah akhir single linked list
void addLast(string judul, string pengarang, int tR)
{
    newNode = new Film();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunrilis = tR;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

// tambah tengah single linked list
void addMiddle(string judul, string pengarang, int tR, int posisi)
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
        newNode = new Film();
        newNode->judul = judul;
        newNode->pengarang = pengarang;
        newNode->tahunrilis = tR;

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
void changeFirst(string judul, string pengarang, int tR)
{
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunrilis = tR;
}

// ubah akhir single linked list
void changeLast(string judul, string pengarang, int tR)
{
    tail->judul = judul;
    tail->pengarang = pengarang;
    tail->tahunrilis = tR;
}

// ubah tengah single linked list
void changeMiddle(string judul, string pengarang, int tR, int posisi)
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
        cur->tahunrilis = tR;
    }
}

// cetak single linked list
void printSingleLinkedList()
{
    cout << "Jumlah data        : " << countSingleLinkedList() << endl;
    cur = head;
    int nomor = 1;
    while (cur != NULL)
    {
        cout << "Data ke-" << nomor << endl;
        cout << "-Judul Film        : " << cur->judul << endl;
        cout << "-Pengarang Film    : " << cur->pengarang << endl;
        cout << "-Tahun Rilis Film  : " << cur->tahunrilis << endl;

        cur = cur->next;
        nomor++;
    }
}

int main()
{
    createSingleLinkedList("Bima", "Rakajati", 2021);

    int option, iTahun, iPosisi;
    string iJudul, iPengarang;
    system("cls");
    do
    {
        menuOption();
        cin >> option;
        switch (option)
        {
        case 1:
            system("cls");
            cout << "Masukkan Judul         : ";
            cin >> iJudul;
            cout << "Masukkan Pengarang     : ";
            cin >> iPengarang;
            cout << "Masukkan Tahun Rilis   : ";
            cin >> iTahun;
            addFirst(iJudul, iPengarang, iTahun);
            break;
        case 2:
            system("cls");
            cout << "Masukkan Judul         : ";
            cin >> iJudul;
            cout << "Masukkan Pengarang     : ";
            cin >> iPengarang;
            cout << "Masukkan Tahun Rilis   : ";
            cin >> iTahun;
            cout << "Masukkan Posisi        : ";
            cin >> iPosisi;
            addMiddle(iJudul, iPengarang, iTahun, iPosisi);
            break;
        case 3:
            system("cls");
            cout << "Masukkan Judul         : ";
            cin >> iJudul;
            cout << "Masukkan Pengarang     : ";
            cin >> iPengarang;
            cout << "Masukkan Tahun Rilis   : ";
            cin >> iTahun;
            addLast(iJudul, iPengarang, iTahun);
            break;
        case 4:
            system("cls");
            removeFirst();
            break;
        case 5:
            system("cls");
            cout << "Masukkan Posisi        : ";
            cin >> iPosisi;
            removeMiddle(iPosisi);
            break;
        case 6:
            system("cls");
            removeLast();
            break;
        case 7:
            system("cls");
            cout << "Masukkan Judul         : ";
            cin >> iJudul;
            cout << "Masukkan Pengarang     : ";
            cin >> iPengarang;
            cout << "Masukkan Tahun Rilis   : ";
            cin >> iTahun;
            changeFirst(iJudul, iPengarang, iTahun);
            break;
        case 8:
            system("cls");
            cout << "Masukkan Judul         : ";
            cin >> iJudul;
            cout << "Masukkan Pengarang     : ";
            cin >> iPengarang;
            cout << "Masukkan Tahun Rilis   : ";
            cin >> iTahun;
            cout << "Masukkan Posisi        : ";
            cin >> iPosisi;
            changeMiddle(iJudul, iPengarang, iTahun, iPosisi);
            break;
        case 9:
            system("cls");
            cout << "Masukkan Judul         : ";
            cin >> iJudul;
            cout << "Masukkan Pengarang     : ";
            cin >> iPengarang;
            cout << "Masukkan Tahun Rilis   : ";
            cin >> iTahun;
            changeLast(iJudul, iPengarang, iTahun);
            break;
        case 10:
            system("cls");
            printSingleLinkedList();
            break;
        }
    } while (option > 0 && option <= 10);
    return 0;
}