#ifndef GAME_H
#define GAME_H

#include <string>

class Player {
public:
    std::string name;

    Player(std::string name);
};

class GamblingGame {
private:
    Player* players[2];

public:
    GamblingGame();

    void play();

    ~GamblingGame();
};

#endif
