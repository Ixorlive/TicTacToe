#ifndef COMPUTER_H
#define COMPUTER_H
#include "board.h"

class Computer
{
public:
    Computer();
    // The computer determines where to go and makes a move
    int make_move(Board* board);
};

#endif // COMPUTER_H
