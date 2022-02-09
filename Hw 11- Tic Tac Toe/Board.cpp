#include "Board.h"


Board::Board() {
    resetBoard();
}
void Board::displayBoard() {
    cout << endl << "-------------------------------" << endl;//move devider
    cout << endl << "  A B C" << endl;//Output x coordinate markers
    for (int i = 0;i < 3;i++) {
        cout << i + 1 << " ";//output y coordinate markers
        for (int j = 0;j < 3;j++) {
            cout << boxes[i][j];//output the playable squares
            if (j < 2) {
                cout << "|";//output lines between columns
            }
        }
        cout << endl;
    }

}
void Board::getNextMove(const Player& player) {
    char coords[2];
    int xPos = 0; int yPos = 0;
    cin.clear();
    cout << endl << player.name << ", where would you like to move?";
    cin >> coords[0] >> coords[1];//input next move

    if (coords[0] == coords[1]) {//check for invaid moves
        cout << "Invalid Move! Please input correct cooridnates! (Ex: 'B1' or '3C') " << endl;
        getNextMove(player);
        return;
    }

    for (int i = 0;i < 2;i++) {//convert to box array index values
        switch (toupper(coords[i])) {
        case'A':
            xPos = 0;
            break;
        case'B':
            xPos = 1;
            break;
        case'C':
            xPos = 2;
            break;
        case'1':
            yPos = 0;
            break;
        case'2':
            yPos = 1;
            break;
        case'3':
            yPos = 2;
            break;
        default://check for invalid moves
            cout << "Invalid Move! Please input correct cooridnates! (Ex: 'B1' or '3C') " << endl;
            getNextMove(player);
            return;
        }
    }

    if (boxes[yPos][xPos] != ' ' && boxes[yPos][xPos] != '_') {
        cout << "Someone has already moved there! Please pick a diffrent square." << endl;
        getNextMove(player);
        return;
    }

    boxes[yPos][xPos] = player.ch;
}
void Board::resetBoard() {
    for (int i = 0;i < 3;i++) {//Creates inital values for the grid when it is empty. Empty spots have ' ' or '_' depending on position to create # shaped grid
        for (int j = 0;j < 3;j++) {
            if (i < 2) {
                boxes[i][j] = '_';
            }
            else boxes[i][j] = ' ';
        }
    }
    movesComplete = 0;
}
char Board::checkForWin() {
    char winningChar = '\0';

    winningChar = checkHorizontalWins();
    if (winningChar == '\0') {
        winningChar = checkVerticalWins();
    }
    if (winningChar == '\0') {
        winningChar = checkDiagonalWins();
    }
    return winningChar;
}

char Board::checkHorizontalWins() {
    char winningChar;
    for (int i = 0;i < 3;i++) {
        if (boxes[i][0] == boxes[i][1] && boxes[i][0] == boxes[i][2]) {//if they are all the same..
            winningChar = boxes[i][0];
            if (winningChar != ' ' && winningChar != '_') {//if its not empty spaces...
                return winningChar;
            }
        }
    }
    return'\0';
}
char Board::checkVerticalWins() {
    char winningChar;
    for (int i = 0;i < 3;i++) {
        if (boxes[0][i] == boxes[1][i] && boxes[0][i] == boxes[2][i]) {//if they are all the same..
            winningChar = boxes[i][0];
            if (winningChar != ' ' && winningChar != '_') {//if its not empty spaces...
                return winningChar;
            }
        }
    }
    return'\0';
}
char Board::checkDiagonalWins() {
    char winningChar = boxes[0][0];
    for (int i = 0;i < 3;i++) {//check top left to bottom right horizontal
        if (boxes[i][i] != winningChar) {
            winningChar = '\0';
        }
    }
    if (winningChar != '\0' && winningChar != '_' && winningChar != ' ') {
        return winningChar;
    }//if they all have the same char thats not invalid, return winningChar.

    winningChar = boxes[2][0];
    for (int i = 0;i < 3;i++) {//check top left to bottom right horizontal
        if (boxes[2 - i][i] != winningChar) {
            winningChar = '\0';
        }
    }
    if (winningChar != '\0' && winningChar != '_' && winningChar != ' ') {
        return winningChar;
    }//if they all have the same char thats not invalid, return winningChar.

    return'\0';
}