#include <iostream>
#include <array>
using namespace std;

int main(){
    // membuat array
    string contact[] = {"Ami", "Ayu", "Budi", "Agus", "Mila"};

    //  mengambil banyaknya isi array
    int length = sizeof(contact) / sizeof(*contact);
    printf("Banyaknya isi array nilai: %d\n", length);

    // cara 2
    array<string, 5> names = {"Ali", "Abi", "Ami", "Mia", "Nia"};
    printf("Ada %d data di dalam array: \n", names.size());

    for(int i = 0; i < names.size(); i++){
        cout << i << ". " << names[i] << endl;
    }

}