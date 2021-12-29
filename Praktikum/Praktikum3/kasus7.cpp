#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus 7 - Try Your Luck!" << endl;
    int answer = 5, guess, chance = 3;

    while(guess != answer){
        cout << "Input your predict number: "; cin >> guess;
        if(guess > answer){
            cout << "Number is too big" << endl;
            chance--;
        }
        else if(guess < answer){
            cout << "Number is too small" << endl;
            chance--;
        }
        else{
            cout << "Amazing, you're too smart." << endl;
            cout << "The number is " << answer;
            return(0);
        }
        if(chance!=0){
            cout << "Your chance still remaining " << chance << endl;
        }
        else{
            cout << "Your time is up" << endl;
            cout << "Sorry, Try Your Luck Next Time" << endl;
            return(0);
        }
    }
 return 0;
}
