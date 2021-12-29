#include <iostream>
using namespace std;

struct STACK
{
    int data[10];
    int top;
} tumpuk;

void enqueue(int input)
{
    tumpuk.top++;
    tumpuk.data[tumpuk.top] = input;
}

int dequeue()
{
    return tumpuk.data[tumpuk.top];
}

void inisialisasi()
{
    tumpuk.top = -1;
}

bool isEmpty()
{
    if (tumpuk.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool isFull()
{
    if (tumpuk.top == 9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void showData()
{
    cout << "Data: " << endl;
    for (int i = 0; i <= tumpuk.top; i++)
    {
        cout << tumpuk.data[i] << " ";
    }
    cout << endl;
}

int main()
{
    int pilih, input;
    inisialisasi();
    do
    {
        cout << "1. enqueue data" << endl;
        cout << "2. dequeue data" << endl;
        cout << "3. showData data" << endl;
        cout << "4. clear data" << endl;
        cout << "5. exit" << endl;
        cout << "Pilih : " << endl;
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
                cout << "Input data yang di enqueue: " << endl;
                cin >> input;
                enqueue(input);
            }
            break;
        case 2:
            if (isEmpty() == 1)
            {
                cout << "Tumpukan Kosong" << endl;
            }
            else
            {
                cout << "Data yang di dequeue " << dequeue() << endl;
            }
            break;
        case 3:
            if (isEmpty() == 1)
            {
                cout << "Tumpukan Kosong" << endl;
            }
            else
            {
                cout << "Data : " << endl;
                showData();
            }
            break;
        case 4:
            inisialisasi();
            break;
        }
    } while (pilih >= 1 && pilih <= 4);

    return 0;
}
