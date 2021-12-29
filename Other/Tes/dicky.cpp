#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

struct queue
{
    char nama[30];
    int umur;
};

struct queue sembako[10];

int maks = 5;
int head = 1;
int tail = 1;
int klmtail = 61;

void lambatkan()
{
    int x;
    for (x = 1; x <= 100000; x++)
        cout << "";
}

void gotoxy(int x, int y)
{
    COORD k = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), k);
}

kotak(int klm1, int brs1, int klm2, int brs2)
{
    int x;
    for (x = klm1; x < klm2; x++)
    {
        gotoxy(x, brs1);
        printf("%c", 196);
        gotoxy(x, brs2);
        printf("%c", 196);
    }
    for (x = brs1; x < brs2; x++)
    {
        gotoxy(klm1, x);
        printf("%c", 179);
        gotoxy(klm2, x);
        printf("%c", 179);
    }
    gotoxy(klm1, brs1);
    printf("%c", 218);
    gotoxy(klm2, brs2);
    printf("%c", 217);
    gotoxy(klm1, brs2);
    printf("%c", 192);
    gotoxy(klm2, brs1);
    printf("%c", 191);
}

geser(struct queue a)
{
    int z;
    for (z = 8; z <= klmtail; z++)
    {
        gotoxy(z, 19);
        printf(" %s", a.nama);
        gotoxy(z, 20);
        printf(" %d", a.umur);
        lambatkan();
    }
}

enqueue(int x) //x=TAIL
{
    if (x <= maks)
    {
        gotoxy(1, 19);
        cout << "Nama : ";
        cin >> sembako[x].nama;
        gotoxy(1, 20);
        cout << "Umur : ";
        cin >> sembako[x].umur;
        geser(sembako[x]);
        tail++;
        klmtail = klmtail - 10;
    }
    else
    {
        cout << "Sorry... Queue is full!!!";
    }
}

geser1(struct queue a)
{
    int x;
    for (x = 61; x <= 70; x++)
    {
        gotoxy(x, 19);
        printf(" %s", a.nama);
        gotoxy(x, 20);
        printf(" %d", a.umur);
        lambatkan();
    }
}

dequeue(int x) //x=HEAD
{
    int z;
    if (tail > head)
    {
        geser1(sembako[head]);
        //njejek
        for (z = 1; z <= tail - 2; z++)
            sembako[z] = sembako[z + 1];

        tail--;
    }
    else
    {
        cout << "Sorry queue is Empty...!!!" << endl;
    }
}

tampil()
{
    int a, z;
    system("cls");
    kotak(1, 1, 50, 3);
    kotak(1, 4, 50, 9);
    kotak(1, 10, 50, 12);
    for (z = 20; z <= 60; z = z + 10)
    {
        kotak(z, 17, z + 9, 22);
    }

    for (a = 1; a < tail; a++)
    {
        gotoxy(61 - ((a - 1) * 10), 19);
        cout << sembako[a].nama;
        gotoxy(61 - ((a - 1) * 10), 20);
        cout << sembako[a].umur;
    }
}

int main()
{
    int pilih;
    do
    {
        tampil();
        gotoxy(5, 2);
        cout << "Menu Utama Antrian" << endl;
        gotoxy(5, 5);
        cout << "1. Enqueue" << endl;
        gotoxy(5, 6);
        cout << "2. Dequeue" << endl;
        gotoxy(5, 7);
        cout << "3. Display Data" << endl;
        gotoxy(5, 8);
        cout << "4. Exit" << endl;
        gotoxy(5, 11);
        cout << "Inputkan Pilihan Anda : ";
        cin >> pilih;
        if (pilih == 1)
            enqueue(tail);
        if (pilih == 2)
            dequeue(head);
        if (pilih == 3)
            tampil();
    } while (pilih != 4);
    return 0;
}