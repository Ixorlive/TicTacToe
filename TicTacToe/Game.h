#ifndef GAME
#define GAME
#include "MainGame.h"
#include "Computer.h"
#include "Menu.h"

class Game : public MainGame
{
	Computer comp;
	int turn;
public:
	Game(int tr);
	// check MainGame for information about this methods
	void set_move(int x);
	void who_turn();
	void set_xo();
	void get_menu();
};

#endif