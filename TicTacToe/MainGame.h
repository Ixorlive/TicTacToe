#ifndef MGAME
#define MGAME
#include <SFML/Graphics.hpp>
#include "TemplateSprite.h"
#include "board.h"

class MainGame
{
public:
	//страшно
	int scrX;
	int scrY;
	TemplateSprite BackGround;
	TemplateSprite lose;
	TemplateSprite won;
	TemplateSprite tie;
	TemplateSprite back;
	TemplateSprite X;
	TemplateSprite O;
	Board board;
	sf::Clock clock;
	float time;

	MainGame() {};
	// set monitor settings
	void set_setting(int scrX, int scrY);
	// main method
	void start_game();
	// the main method where the game is going and its rendering
	void set_sprites();
	// set sprite X and O
	virtual void set_xo() = 0;
	// one of the players makes a move
	virtual void set_move(int x) = 0;
	// determines whose current move
	virtual void who_turn() = 0;
	// open game menu
	virtual void get_menu() = 0;
};

#endif
