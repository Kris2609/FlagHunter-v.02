#pragma once
#include <SFML/Graphics.hpp>
using namespace sf; 
class Player
{
private: 
	Texture playerTexture; 
	Sprite sprite; 
public: 
	void MoveUp(); 
	void MoveDown(); 
	void MoveLeft(); 
	void MoveRight(); 

	
};

