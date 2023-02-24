#ifndef MYTEXT
#define MYTEXT
#include <SFML/Graphics.hpp>


class TemplateText
{
	sf::Font font;
	sf::Text text;
public:
	TemplateText(const std::string& str, int size);
	// get sf::Text
	sf::Text get_text();
	// chacge string on text
	void change_text(const std::string& std);
	// set positions
	void set_pos(int x, int y);
};

#endif