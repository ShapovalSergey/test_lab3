#pragma once
#include "newgame.h"
class newgamecountry :
    public newgame
{
public:
	newgamecountry() {};
	string getFlagAnswer(int flag);
	char getFlagHintLetter(int flag);
	string getFlagHintLocation(int flag);
	int getFlagId();
};

