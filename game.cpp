#include <iostream>

using namespace std;

int main()
{
    /*
        THE RULES:
            1) Player 1 selects a random number;
            2) Player 2 needs to guess the number;
            3) Game tells player 2 whether the guess is too low or too high
            4) Game counts Player 2's attempts
    */

    int numberToGuess = 0;
    int currentGuess = 0;
    int numOfGuesses = 0;

    cout << "Player One, please choose a number: " << endl;
    cin >> numberToGuess;

    while (true)
    {
        cout << "Player Two, please guess the number: " << endl;
        cin >> currentGuess;
        if (currentGuess > numberToGuess)
        {
            numOfGuesses += 1;
            cout << "INFORMATION: You guessed too high! You have made " << numOfGuesses << " guesses so far" << endl;
        }
        else if (currentGuess < numberToGuess)
        {
            numOfGuesses += 1;
            cout << "INFORMATION: You guessed too low! You have made " << numOfGuesses << " guesses so far" << endl;
        }
        else
        {

            cout << "That is correct! Congrats, you win!" << endl;
            cout << "INFORMATION: It took you " << numOfGuesses << " tries to get the correct number" << endl;
            break;
        }
    }

    return 0;
}