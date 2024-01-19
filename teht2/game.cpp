#include "game.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Game::Game(int maxnum){
    std::srand(100);
    maxNumber = maxnum;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
}
Game::~Game(){
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}
void Game::play(){
    randomNumber = (std::rand() % maxNumber) + 1;
    while(true){
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        if (playerGuess > randomNumber){
            cout << "Your guess is too big" << endl <<  endl;
        }
        else if (playerGuess < randomNumber){
            cout << "Your guess is too small" << endl << endl;
        }
        else {
            cout << "Your guess is right = " << randomNumber << endl;
            numOfGuesses += 1;
            printGameResult();
            break;
        }
        numOfGuesses += 1;
    }
}
void Game::printGameResult(){
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}
