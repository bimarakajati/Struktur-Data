// BIMA RAKAJATI
// A11.2020.13088

#include <iostream>
#define Max 10
using namespace std;

struct isStack
{
    int top;
    int data[Max];
} Stack;

bool isFull()
{
    if (Stack.top == Max)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty()
{
    if (Stack.top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void pushArr(int inputData)
{
    if (!isFull())
    {
        Stack.data[Stack.top + 1] = inputData;
        cout << "berhasil push " << inputData << endl;
        Stack.top++;
    }
}

void popArr()
{
    if (!isEmpty())
    {
        cout << "berhasil pop " << Stack.data[Stack.top] << endl;
        Stack.top--;
    }
}

void setAwal()
{
    Stack.top = -1;
}

void reverse()
{
    cout << "Reverse: " << endl;
    for (int i = 0; i <= Stack.top; i++)
    {
        cout << Stack.data[i] << " ";
        cout << endl;
    }
}

void printArr()
{
    cout << "Data Sebelum reverse: " << endl;
    for (int i = Stack.top; i >= 0; i--)
    {
        cout << Stack.data[i] << " ";
        cout << endl;
    }
}

int main()
{
    int pilih, input;
    setAwal();
    do
    {
        cout << "1. Push data     " << endl;
        cout << "2. Pop data      " << endl;
        cout << "3. Print data    " << endl;
        cout << "4. Clear data    " << endl;
        cout << "5. Reverse data  " << endl;
        cout << "6. Exit          " << endl;
        cout << "Pilih: ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            if (isFull() == 1)
            {
                cout << "Tumpukan Penuh" << endl;
            }
            else
            {
                cout << "Data yang di push: ";
                cin >> input;
                pushArr(input);
            }
            break;
        case 2:
            if (isEmpty() == 1)
            {
                cout << "Tumpukan Kosong" << endl;
            }
            else
            {
                popArr();
            }
            break;
        case 3:
            if (isEmpty() == 1)
            {
                cout << "Tumpukan kosong" << endl;
            }
            else
            {
                printArr();
            }
            break;
        case 4:
            setAwal();
            break;
        case 5:
            reverse();
            break;
        }
    } while (pilih >= 1 && pilih <= 5);
    return 0;
}