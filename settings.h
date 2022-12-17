#pragma once
#include <SFML/Graphics.hpp>
const float WINDOW_WIDTH = 800;
const float WINDOW_HEIGHT = 600;
const std::string WINDOW_TITLE = "SFML Lesson2";
const float FPS = 60.f;
const float BAT_WIDTH = 20.f;
const float batHeight = 80.f;
const float batOffset = 50.f;
const sf::Vector2f batSize(20.f, 80.f);
const sf::Color leftBatColor{ 158,20,37 };
const sf::Color rightBatColor{ 20,158,49 };
const float BAT_SPEED = 5.f;
const sf::Vector2f leftBatStartPos{ batOffset, (WINDOW_HEIGHT - batHeight) / 2 };
const sf::Vector2f rightBatStartPos{ batOffset, (WINDOW_HEIGHT - batHeight) / 2 };


const float ballRadius = 25.f;
const sf::Color ballColor{ sf::Color::Yellow };	

void controlBat(sf::RectangleShape& bat, float& sf::Keyboard::Key,
	sf::Keyboard::Key down_key);
{
	if (sf::Keyboard::isKeyPressed(up_key)) batSpeedY = -BAT_SPEED;
	if (sf::Keyboard::isKeyPressed(down_key)) batSpeedY = BAT_SPEED
		bat.move(0.f, batSpeedY);
	batSpeedY = 0;
}
