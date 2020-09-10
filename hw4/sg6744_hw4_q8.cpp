#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// NUMBER GUESSING GAME
int main() {
//setup
    const int MAX_GUESSES = 5;  //so difficulty could be easily changed and for testing "out of guesses"
    int answer;
    srand(time(0));
    answer = rand() % 100 + 1;  //range 1 - 100
//game loop
    int guess, guessRem, rangeMin = 1, rangeMax = 100;
    cout<< "I thought of a number between 1 and 100! Try to guess it."<< endl;
    for (guessRem = MAX_GUESSES; guessRem > 0; guessRem--) {
        cout<< "Range: ["<< rangeMin<< ","<<rangeMax<< "], Number of guesses left: "<< guessRem<< endl;
        cout<< "Your guess: ";
        cin>> guess;
        if (guess == answer) { // correct guess
            cout<< "Congrats! You guessed my number in "<< (MAX_GUESSES +1) - guessRem<< " guesses."<< endl;
            return 0;
        }
        else if (guess > answer){ // too large
            cout<< "Wrong! My number is smaller.\n"<< endl;
            rangeMax = guess - 1;
        }
        else if (guess < answer){ // to small
            cout<< "Wrong! My number is bigger.\n"<< endl;
            rangeMin = guess + 1;
        }
    }
    cout<< "Out of guesses! My number is "<< answer; // out of guesses
    return 0;
}