#include <iostream>
using namespace std;

int main()
{
	int input;
	cout << "Berapa kali input? ";
	cin >> input;

	string masukan[input] = {};
	for(int i = 0; i < input; i++){
		cout << "Masukkan string: ";
		cin >> masukan[i];
	}

	int length = sizeof(masukan) / sizeof(*masukan);
	cout << "masukan = ";
	for (int i = 0; i < length; i++)
	{
		cout << masukan[i] << " ";
	}	
}