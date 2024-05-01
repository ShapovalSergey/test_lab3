#include "newgamecapital.h"



int newgamecapital::getFlagId()
{
	srand(time(NULL));
	int flag;
	int notUsed = 1;
	while (notUsed!=0)
	{
		flag = rand() % 196 + 1;
		notUsed = 0;
		for (int i = 0; i < usedFlags.size(); i++)
		{
			if (usedFlags[i]==flag)
			{
				notUsed++;
			}
		}
	}
	return flag;
}
string newgamecapital::getFlagAnswer()
{
	return "";
}
char newgamecapital::getFlagHintLetter()
{
	return 'c';
}
string newgamecapital::getFlagHintLocation()
{
	return "";
}