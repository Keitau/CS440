#pragma once
#include <String>

struct Player()
{
public:
	
	Player(String name){this.name = name;}

	String name;
	int wins = 0;
	int loses = 0;
};