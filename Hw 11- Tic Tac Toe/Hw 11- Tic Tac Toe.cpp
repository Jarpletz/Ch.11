// Hw 11- Tic Tac Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<cstdlib>

#include"Player.h"
#include "Board.h"


using namespace std;


void setupPlayers();
void manageWin();
void requestPlayAgain();

enum class gameState{ setUp,playing,win,draw,done };
gameState state =gameState::setUp;
int gamesPlayed = 0;
Board gameBoard;
bool playAgain=true;

Player players[2];


int main()
{
    cout << "It's time to play some Tic Tac Toe!" << endl << endl;


    setupPlayers();

    while(playAgain){
        state = gameState::playing;
        cout << players[0].name << ": " << players[0].score << endl;
        cout << players[1].name << ": " << players[1].score << endl;
        gameBoard.resetBoard();
        gameBoard.displayBoard();//display board


        while (state == gameState::playing) {

            Player currentPlayer;
            if ((gamesPlayed + gameBoard.movesComplete) % 2 == 0) {
                currentPlayer = players[0];
            }
            else {
                currentPlayer = players[1];
            }
            //determine whose turn it is

            gameBoard.getNextMove(currentPlayer);
            gameBoard.movesComplete++;//Input the current player's move, convert it to the proper coordinates, and set it on the play board

            gameBoard.displayBoard();//display board
            manageWin();//check for win. if win, run win stuff


        }
    }
    

    return 0;
}

void setupPlayers() {
    cout << "Player 1, what is your name? ";
    getline(cin, players[0].name);
    cout << "Player 2, what is your name? ";
    getline(cin, players[1].name);
    cout << endl << "Nice to meet you, " << players[0].name << " and " << players[1].name << "! Before we play," << endl;

    players[0].determineMarker();
    players[1].determineMarker();
    while (players[0].ch == players[1].ch) {
        cout << "Uh oh! You can't both have the same marker!" << endl;
        players[1].determineMarker();
    }
    cout << endl << "Ok, We're ready to play!" << endl;
    state =gameState::playing;
}

void manageWin() {
    char winningChar =gameBoard.checkForWin();//get winning charater (if any)

    for (int i = 0;i < 2;i++) {
        if (winningChar == players[i].ch) {
            cout << players[i].name << " Wins!!!!!!!!!!!!!!!" << endl << endl;
            state = gameState::win;
            players[i].score++;
            gamesPlayed++;
            requestPlayAgain();
            return;
        }
    }
    if (gameBoard.movesComplete >= 9) {
        cout << "Tie Game!!!!" << endl << endl;
        state = gameState::win;
        gamesPlayed++;
        requestPlayAgain();
        return;
    }
   
}
void requestPlayAgain() {
 cout << "Play Again? (Y/N)";
    char choice;
    cin >> choice;
    switch (toupper(choice))
    {
    case'Y':
        return;
        break;
    case'N':
        playAgain = false;
        return;
        break;
    default:
        cout << "Please Enter 'Y' or 'N'!!!" << endl;
        requestPlayAgain();
        return;
        break;
    }
}
//   a b c
// 1 _|_|_
// 2 _|_|_
// 3  | | 