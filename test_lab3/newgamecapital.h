#pragma once
#include "newgame.h"
class newgamecapital :
    public newgame
{
public:
	newgamecapital() { };
	string getFlagAnswer();
	char getFlagHintLetter();
	string getFlagHintLocation();
	int getFlagId();
};

