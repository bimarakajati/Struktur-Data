#include <iostream>
#define max 5

using namespace std;

int main(int argc, const char** argv) 
{
    cout << "Kasus-5 Array dan Pointer" << endl;

    (void)argc;
    (void)argv;

    // input array
    int* arr = new int[max];
    for (int i=0; i< max; i++){
        cout << "Masukkan angka: ";
        cin >> arr[i];
    }

    // lihat array before
    cout << "Deret before : ";
    for (int i=0; i< max; i++) {
        cout << arr[i] << " ";
    }

    // set pointer
	*(&arr[2]) = 100;
	int* ptr_arr2 = &arr[2];
	*ptr_arr2 = 100;

    // lihat array after
    cout << "\nDeret after  : ";
    for (int i=0; i< max; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}