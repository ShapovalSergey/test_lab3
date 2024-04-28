#pragma once
#include "Headers.h"

using namespace std;
class newgame
{
private:
	int gamescore = 0;
	int streak = 1;
	int turn = 1;
	int hintLetter = 5;
	int hintLocation = 5;
	int checkAnswer = 3;
	vector <string> usedFlags;
public:
	newgame() {};
	virtual string getFlagAnswer() = 0;
	virtual char getFlagHintLetter() = 0;
	virtual string getFlagHintLocation() = 0;
	~newgame() {};
};

