#pragma once
#include "newgame.h"
class newgamecountry :
    public newgame
{
public:
	newgamecountry() {};
	string getFlagAnswer();
	char getFlagHintLetter();
	string getFlagHintLocation();
	int getFlagId();
};

