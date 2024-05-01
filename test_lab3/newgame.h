#pragma once
#include "Headers.h"

using namespace std;
class newgame
{
protected:
	int gamescore = 0;
	int streak = 1;
	int turn = 1;
	int hintLetter = 5;
	int hintLocation = 5;
	int checkAnswer = 3;
	vector <int> usedFlags;
public:
	newgame() {};
	virtual string getFlagAnswer(int flag) = 0;
	virtual string getFlagHintLetter(int flag) = 0;
	virtual string getFlagHintLocation(int flag) = 0;
	virtual int getFlagId() = 0;
	vector <int> getUsedFlags() { return this->usedFlags; };
	void addUsedFlag(int flag) { this->usedFlags.push_back(flag); };
	~newgame() {};
};

