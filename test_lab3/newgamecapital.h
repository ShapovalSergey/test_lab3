#pragma once
#include "newgame.h"
class newgamecapital :
    public newgame
{
public:
	newgamecapital() { };
	string getFlagAnswer(int flag);
	char getFlagHintLetter(int flag);
	string getFlagHintLocation(int flag);
	int getFlagId();
};

