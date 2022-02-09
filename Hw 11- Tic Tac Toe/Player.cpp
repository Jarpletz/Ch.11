#include "Player.h"

Player::Player() {
    score = 0;
    ch = ' ';
    name = "";
}
void Player::determineMarker() {
    cout << name << ", what will your marker be? ";
    cin >> ch;
    if (ch == ' ' || ch == '_' || ch == '|') {
        cout << "Invalid Marker! Please choose a diffrent character!" << endl;
        determineMarker();
    }
}