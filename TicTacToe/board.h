#ifndef BOARD_H
#define BOARD_H


class Board
{
    int board[9];
public:
    Board();
    //create new board(set all value of the board to 0)
    void new_board();
    // define winner
    int winner();
    // Sets index board to pl
    void set_move(int point, int pl);
    // return true? if index(point) board is empty(0)
    bool check_move(int point);
    // return value of the board on id
    int get_item(int id);
    // copy board from other class
    void copy_board(Board* br);
    // return true, if board is full
    bool board_full();
};

#endif // BOARD_H
 