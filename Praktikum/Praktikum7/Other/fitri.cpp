#include <iostream>
using namespace std;

struct Queue
{
    string arr[10];
    int back = 0;
};

Queue queueArr;
int maxArr = 10;
void menuOption()
{
    cout << "Pilih Menu Utama Queue" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Clear Data" << endl;
    cout << "4. Show Data" << endl;
    cout << "5. Exit" << endl;
    cout << "Masukkan pilihan Anda : ";
}

bool IsFull()
{
    if (queueArr.back == maxArr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsEmpty()
{
    if (queueArr.back == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(string value)
{
    if (IsFull())
    {
        cout << "Queue Full" << endl;
    }
    else
    {
        queueArr.arr[queueArr.back] = value;
        queueArr.back++;
    }
}

void dequeue()
{
    if (IsEmpty())
    {
        cout << "Empty !!!" << endl;
    }
    else
    {
        for (int i = 0; i < queueArr.back; i++)
        {
            queueArr.arr[i] = queueArr.arr[i + 1];
        }
    }
}

void clearvalue()
{
    if (IsEmpty())
    {
        cout << "Empty !!!" << endl;
    }
    else
    {
        for (int i = 0; i < maxArr; i++)
        {
            queueArr.arr[i] = "";
            queueArr.back--;
        }
    }
}

void showvalue()
{
    for (int i = 0; i < maxArr; i++)
    {
        if (queueArr.arr[i] != "")
        {
            cout << i + 1 << ". " << queueArr.arr[i] << endl;
        }
        else
        {
            cout << i + 1 << ". (Data Empty)" << endl;
        }
    }
}

int main()
{
    int option;
    string value;
    system("cls");
    do
    {
        menuOption();
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Masukkan Value : ";
            cin >> value;
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            clearvalue();
            break;
        case 4:
            showvalue();
            break;
        }
    } while (option > 0 && option <= 4);
    return 0;
}
