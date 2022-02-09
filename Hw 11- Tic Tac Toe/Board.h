#pragma once
#ifndef Board_H
#define Board_H

#include <iostream>
#include<string>
#include "Player.h"
using namespace std;
class Board
{
public:
    int movesComplete;

    void displayBoard();
    void getNextMove(const Player&);
    void resetBoard();
    char checkForWin();//returns the charater of the winning symbol
    Board();

private:
    char boxes[3][3];

    char checkHorizontalWins();
    char checkVerticalWins();
    char checkDiagonalWins();
};

#endif // !Board_H

