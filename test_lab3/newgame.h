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
	virtual string getFlagHintLocation(int flag) = 0;
	virtual int getFlagId() = 0;
	vector <int> getUsedFlags() { return this->usedFlags; };
	void addUsedFlag(int flag) { this->usedFlags.push_back(flag); };
	int getCheckAnswer() { return this->checkAnswer; };
	void setCheckAnswer(int newCheckAnswer) { this->checkAnswer = newCheckAnswer; };
	int getStreak() { return this->streak; };
	void setStreak(int newStreak) { this->streak = newStreak; };
	void addStreak() { this->streak += 1; };
	int getGamescore() { return this->gamescore; };
	void addGamescore(int addGamescore) { this->gamescore += addGamescore; };
	int getTurn() { return this->turn; };
	void addTurn() { this->turn += 1; };
	int gethintLetter() { return this->hintLetter; };
	void sethintLetter(int newhintLetter) { this->hintLetter = newhintLetter; };
	int gethintLocation() { return this->hintLocation; };
	void sethintLocation(int newhintLocation) { this->hintLocation = newhintLocation; };
	~newgame() {};
};

