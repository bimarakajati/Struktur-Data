#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 6 - Guess Number!" << endl;
    int answer = 69, guess;

    while(guess != answer){
        cout << "Input your predict number: "; cin >> guess;
        if(guess > answer){
            cout << "Number is too big" << endl;
        }
        else{
            if(guess != answer){
                cout << "Number is too small" << endl;
            }
        }
    }
    cout << "Amazing, you're too smart." << endl;
    cout << "The number is " << answer;
 return 0;
}
