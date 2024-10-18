#include <iostream>
#include <ctime>
#include <string>
using namespace std;

PrintOutcome(bool isCorrect);

int main() 
{

    cout << "Welcome to the number guessing game! " << endl;
    cout << "You should guess a number between one and ten. You have three guesses," << endl;
    cout << "if you don't guess it, it will be a win for your opponent or the computer." << endl << endl;

    cout << "Now choose the type of the game:" << endl;
    cout << "1. Coop (Player vs Computer)" << endl;
    cout << "2. PvsP (Player vs Player)" << endl;

    srand((unsigned)time(0)); 
    constexpr int kCoop = 1, kPvsP = 2;
    int typeOfGame;
    cin >> typeOfGame;

    if (typeOfGame == kCoop) 
    {
        cout << "Tell me your name: " << endl;
        string name;
        cin >> name;
        cout << "Alright " << name << ", let's begin!" << endl << endl;

        int randomNumber = 1 + rand() % 10;
        int guess;
        //, attempts = 3;
        const unsigned int Attempts = 3;
        bool isCorrectGuess = false;
        //while (attempts > 0 || isCorrectGuess == false) 
        for(unsigned int currentAttempt = 1; currentAttempt <= Attempts; currentAttempt++)
        {
            cout << "Give me your guess: ";
            cin >> guess;
            isCorrectGuess = (guess == randomNumber);

            if(isCorrectGuess)
            {
                break;
            }
            else 
            {
                cout << "Oops! Wrong guess! You have " << (Attempts - currentAttempt) << " left. Please try again." << endl << endl;
            }
        }

        PrintOutcome(isCorrectGuess);
    }
    else if (typeOfGame == kPvsP) 
    {
        int numberOfPlayer1, player2Guess, attempts = 3;
        string nameOfPlayer1, nameOfPlayer2;

        cout << "Player 1, please write your name: ";
        cin >> nameOfPlayer1;
        cout << "Player 2, please write your name: ";
        cin >> nameOfPlayer2;

        cout << "Welcome " << nameOfPlayer1 << " and " << nameOfPlayer2 << "!" << endl << endl;
        cout << "Now " << nameOfPlayer1 << ", enter a number between 1 - 10, so " << nameOfPlayer2 << " can guess it." << endl;
        cin >> numberOfPlayer1;

        while (attempts > 0) 
        {
            cout << nameOfPlayer2 << ", it's your turn to guess: ";
            cin >> player2Guess;

            if (player2Guess == numberOfPlayer1) 
            {
                cout << "Congrats " << nameOfPlayer2 << ", you won!" << endl;
                break;
            }
            else 
            {
                attempts = attempts - 1;

                if (attempts > 0) 
                {
                    cout << "Oops! Wrong guess! You have " << attempts << " left. Please try again." << endl << endl;
                }
                else 
                {
                    cout << "No way! You ran out of guesses! Game over! The number was. " << numberOfPlayer1 << endl;
                    cout << nameOfPlayer1 << " won!" << endl << endl;
                }
            }
        }
    }
    return 0;
}

PrintOutcome(bool isCorrect)
{
    if(isCorrect)
    {
        cout << "Congrats!" << endl;
    }
    else
    {
       cout << "No way! You ran out of guesses! Game over! The number was " << randomNumber << "." << endl << endl;
    }
}
