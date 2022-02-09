#pragma once
#ifndef Player_H
#define Player_H

#include <string>
#include <iostream>
using namespace std;

class Player
{
public:
    int score;
    char ch;
    string name;
    void determineMarker();
    Player();
};

#endif // !Player_H

