#include <iostream>

using namespace std;

int main(){
	string huruf;
	int a = 0, b = 0;
	cout << "Masukkan String : "; cin >> huruf;
	for(int i = 0; i < huruf.length(); i++){
		if(huruf[i] == 'a' || huruf[i] == 'i'|| huruf[i] == 'u' || huruf[i] == 'e' || huruf[i] == 'o'){
			a += 1;
		}
		else{
//			if(huruf[i] != 'a' || huruf[i] != 'i'|| huruf[i] != 'u' || huruf[i] != 'e' || huruf[i] != 'o'){
			b += 1;
//			}			
		}
	}
	cout << "Vocal : " << a;
	cout << "Konsonan : "<< b;	
	return 0;
}