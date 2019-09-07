#pragma once

#include <SFML/Graphics.hpp>

class SFML_TitleScreen : public sf::Drawable
{
public:
	SFML_TitleScreen(std::string texturefilename, int windowWidth, int windowHeight);
	~SFML_TitleScreen();

	void update(sf::Time elapsedTime);

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	sf::Texture	m_titleScreenTexture;
	sf::Sprite	m_titleScreenSprite;

	sf::Font	m_messageFont;
	sf::Text	m_messageString;

	sf::Time	m_flashingTime;
	sf::Time	m_timeSinceLastFlash;

	bool		m_flashOn;
};

