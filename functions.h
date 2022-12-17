#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

void initBat(sf::RectangleShape& bat, const sf::Color batColor, const sf::Vector2f batPosition)
{
	bat.setSize(batSize);
	bat.setFillColor(batColor);
	bat.setPosition(batPosition);
}

void ballReboundX(int& ballSpeed, int& playerScore, sf::Text& scoreText)
{
	ballSpeed = -ballSpeed;
	playerScore++;
	scoreText.setString(std::to_string(playerScore));
}
void ballReboundX(int& ballSpeed, int& playerScore, sf::Text& scoreText)
{

}

void initText(sf::Text& scoreText, int score, sf::Font& font,
	const int charSize, const sf::Vector2f textStartPos) {
	scoreText.setString(std::to_string(score));
	scoreText.setFont(font);
	scoreText.setCharacterSize(charSize);
	scoreText.setPosition(textStartPos);
}

void controlBat(sf::RectangleShape& bat, float& sf::Keyboard::Key,
	sf::Keyboard::Key down_key);

if (Keyboard::isKeyPressed(Keyboard::W)) {
	leftBatSpeedY = -batSpeed;
}
if (Keyboard::isKeyPressed(Keyboard::S)) {
	leftBatSpeedY = batSpeed;
}

leftBat.move(0, leftBatSpeedY);

leftBatSpeedY = 0;
