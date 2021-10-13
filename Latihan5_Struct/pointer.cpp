#include<iostream>
using namespace std;

void array_a(int *b){
    cout << "  Nilai dari b : " << *b << endl;
    cout << "Address from b : " << b << endl << endl;
}

void array_b(int b){
    cout << "  Nilai dari b : " << b << endl;
    cout << "Address from b : " << &b << endl << endl;
}

// int kuadrat(int *valPtr){
//     valPtr = (*valPtr)(*valPtr);
//     cout << "  Nilai dari valPtr : " << *valPtr << endl;
//     cout << "Address from valPtr : " << valPtr << endl << endl;
//     return *valPtr;
// }

int main(){
    int a = 10;

    system("cls");
    cout << "  Nilai dari a : " << a << endl;
    cout << "Address from a : " << &a << endl << endl;

    a = 20;
    array_a(&a);

    array_b(a);
    // int b = kuadrat(&a);

    // cout << "  Nilai dari a : " << &b << endl;
    // cout << "Address from a : " << b << endl << endl;

    return 0;
}