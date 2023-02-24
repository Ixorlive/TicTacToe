#include "TemplateText.h"

TemplateText::TemplateText(const std::string& str, int size)
{
	font.loadFromFile("font/Alata-Regular.ttf");
	text.setFont(font);
	text.setString(str);
	text.setFillColor(sf::Color::White);
	text.setCharacterSize(size);
}

sf::Text TemplateText::get_text()
{
	return text;
}

void TemplateText::change_text(const std::string& str)
{
	text.setString(str);
}

void TemplateText::set_pos(int x, int y)
{
	text.setPosition(x, y);
}