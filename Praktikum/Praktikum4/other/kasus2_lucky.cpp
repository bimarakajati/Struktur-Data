#include <iostream>

using namespace std;

int main(){
	string huruf;
    string vocal[10], konsonan[10];
	int a = 0, b = 0;
	cout << "Masukkan String : ";
    cin >> huruf;

    // loop
	for(int i = 0; i < huruf.size(); i++){
		if(huruf[i] == 'a' || huruf[i] == 'i'|| huruf[i] == 'u' || huruf[i] == 'e' || huruf[i] == 'o')
        {
            vocal[i] = huruf[i];
			a += 1;
		}
		else
        {
            konsonan[i] = huruf[i];
			b += 1;
		}
	}
	cout << "Vocal : " << a << endl;
    for (int i = 0; i < sizeof(vocal)/sizeof(vocal[0]); i++)
    {
        cout << vocal[i];
    }
    cout << endl;
	cout << "Konsonan : "<< b << endl;	
    for (int i = 0; i < sizeof(konsonan)/sizeof(konsonan[0]); i++)
    {
        cout << konsonan[i];
    }
	return 0;
}