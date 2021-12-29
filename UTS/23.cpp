// BIMA RAKAJATI
// A11.2020.13088

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 5

using namespace std;

int nomer[MAX];
int head = -1;
int tail = -1;

int isEmpty()
{
    if (tail == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (tail == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enQueue(int nomor)
{
    if (isEmpty())
    {
        head = tail = 0;
    }
    else
    {
        tail++;
    }
    nomer[tail] = nomor;
}

void deQueue()
{
    if (isEmpty())
    {
        cout << "Antrian sudah kosong ! ";
        getch();
    }
    else
    {
        for (int a = head; a < tail; a++)
        {
            nomer[a] = nomer[a + 1];
        }
        tail--;
        if (tail == -1)
        {
            head = -1;
        }
    }
}

void delQueue()
{
    head = tail = -1;
}

void printQueue()
{
    if (isEmpty())
    {
        cout << "Antrian kosong ! ";
    }
    else
    {
        system("cls");
        for (int a = head; a <= tail; a++)
        {
            cout << "\n >> No. Antri : [" << nomer[a] << "]\n"
        }
    }
}

int main()
{
    int choose, p = 1, urut;
    do
    {
        system("cls");
        cout << "\n1. Antrian masuk     "
             << "\n2. Antrian keluar    "
             << "\n3. Tampil antrian    "
             << "\n4. Hapus Antrian     "
             << "\n5. Keluar            ";
        cout << "\nPilih: ";
        cin >> choose;
        cout << "\n\n";
        if (choose == 1)
        {
            if (isFull())
            {
                cout << "Mohon tunggu beberapa saat lagi karena antrian sudah penuh";
            }
            else
            {
                urut = p;
                enQueue(urut);
                cout << "NO. ANTRIAN" << endl;
                cout << p << endl;
                cout << "Silahkan mengantri" << endl;
                cout << "Menunggu " << tail << " antrian" << endl;
                p++;
            }
        }
        else if (choose == 2)
        {
            cout << "No. Antri : " << nomer[head] << "\n";
            deQueue();
            cout << "Silahkan antrian berikutnya!" << endl;
        }
        else if (choose == 3)
        {
            printQueue();
        }
        else if (choose == 4)
        {
            delQueue();
            cout << "Antrian dihapus! ";
        }
        else if (choose == 5)
        {
            cout << "Antrian selesai\n"
                 << endl;
        }
        else
        {
            cout << "Input salah!\n"
                 << endl;
        }
        getch();
    } while (choose != 5);
}
