#include <iostream>
using namespace std;

struct Queue
{
    string arr[10];
    int back = 0;
};

Queue qArr;
int maxArr = 10;
void menuOption()
{
    cout << "Select Main Menu Queue" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Clear Data" << endl;
    cout << "4. Display Data" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

bool IsFull()
{
    if (qArr.back == maxArr)
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
    if (qArr.back == 0)
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
        cout << "Sorry... Queue is Full!!!" << endl;
    }
    else
    {
        qArr.arr[qArr.back] = value;
        qArr.back++;
    }
}

void dequeue()
{
    if (IsEmpty())
    {
        cout << "Sorry Queue is Empty...!!!" << endl;
    }
    else
    {
        for (int i = 0; i < qArr.back; i++)
        {
            qArr.arr[i] = qArr.arr[i + 1];
        }
    }
}

void clearvalue()
{
    if (IsEmpty())
    {
        cout << "Sorry Queue is Empty...!!!" << endl;
    }
    else
    {
        for (int i = 0; i < maxArr; i++)
        {
            qArr.arr[i] = "";
            qArr.back--;
        }
    }
}

void showvalue()
{
    for (int i = 0; i < maxArr; i++)
    {
        if (qArr.arr[i] != "")
        {
            cout << i + 1 << ". " << qArr.arr[i] << endl;
        }
        else
        {
            cout << i + 1 << ". (Blank Data)" << endl;
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
            cout << "Enter the data: ";
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
