#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 5

using namespace std;


int nomer[MAX];
int head=-1;
int tail=-1;

int IsEmpty(){
   if(tail == -1){
       return 1;
   }else{
       return 0;
   }
}
int IsFull(){
   if(tail == MAX-1){
       return 1;
   }else{
       return 0;
   }
}

void Qmasuk(int nomor){
    if (IsEmpty()){
        head=tail=0;
    }else {
        tail++;
    }
    nomer[tail]=nomor;
}

void Qkeluar(){
    if(IsEmpty()){
        cout<<"Antrian sudah kosong ! ";
        getch();
    }else {
        for(int a=head;a<tail;a++){
            nomer[a]=nomer[a+1];
        }
        tail--;
        if(tail == -1){
            head = -1;
        }
    }
}

void hapusQ(){
     head=tail=-1;
}

void tampilQ(){
     if(IsEmpty()){
         cout<<"Antrian kosong ! ";

     }else {
         system("cls");
         for(int a=head;a<=tail;a++){
              cout << "--------------------------------------"
                   << "\n >> No. Antri : [" << nomer[a] << "]"
                   << "\n------------------------------------"<< endl;
         }
     }
}

int main()
{
    int choose, p=1, urut;
    do{
        system("cls");
        cout << "\n\n===== PROGRAM QUEUE NO 21 ====="
             << "\n==============================="
             << "\n|1. Tambah Antrian            |"
             << "\n|2. Panggil Antrian           |"
             << "\n|3. Lihat daftar antrian      |"
             << "\n|4. Format                    |"
             << "\n|5. Exit                      |"
             << "\n===============================";
        cout << "\nPilih: "; cin >> choose;
        cout << "\n\n";
        if(choose == 1){
            if(IsFull()) {
                cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
            }
            else{
                urut=p;
                Qmasuk(urut);
                cout << "---------------------------------" << endl;
                cout << "|          NO. ANTRIAN          |" << endl;
                cout << "|               " << p << "               |" << endl;
                cout << "---------------------------------" << endl;
                cout << "|       Silahkan mengantri      |" << endl;
                cout << "|      Menunggu " << tail << " antrian       |" << endl;
                cout << "---------------------------------" << endl;
                p++;
            }
        }
        else if(choose == 2){
            cout << "-----------------------------------" << endl;
            cout << "No. Antri : [" << nomer[head] << "]";
            cout << "\n---------------------------------" << endl;
            Qkeluar();
            cout << "Silahkan dipanggil antrian berikutnya!" << endl;
        }
        else if(choose == 3){
            tampilQ();
        }
        else if(choose == 4){
            hapusQ();
            cout<<"Antrian dikosongkan! ";
        }
        else if(choose == 5){
            cout << "Antrian selesai\n" << endl;
        }
        else{
            cout << "Data msukkan anda salah!\n"<< endl;
        }
        getch();
    }while(choose!=5);
}
