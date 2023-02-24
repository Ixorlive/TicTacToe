#ifndef PL
#define PL

#include "MainGame.h"
#include "Menu.h"

class Players : public MainGame
{
	bool Whoturn;
public:
	Players();
	// one of the players makes a move
	void set_move(int x);
	// determines whose current move
	void who_turn();
	// set sprite X and O
	void set_xo();
	// open game menu
	void get_menu();
};

#endif
