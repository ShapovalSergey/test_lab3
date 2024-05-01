#include "newgamecountry.h"

int newgamecountry::getFlagId()
{
	srand(time(NULL));
	int flag;
	int notUsed = 1;
	while (notUsed != 0)
	{
		flag = rand() % 196 + 1;
		notUsed = 0;
		for (int i = 0; i < usedFlags.size(); i++)
		{
			if (usedFlags[i] == flag)
			{
				notUsed++;
			}
		}
	}
	return flag;
}
string newgamecountry::getFlagAnswer(int flag)
{
	return "";
}
string newgamecountry::getFlagHintLetter(int flag)
{
	return "";
}
string newgamecountry::getFlagHintLocation(int flag)
{
	return "";
}