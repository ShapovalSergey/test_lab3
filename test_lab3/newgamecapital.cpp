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
	addUsedFlag(flag);
	return flag;
}
string newgamecapital::getFlagAnswer(int flag)
{
	char otvet[30];
	FILE* p = fopen("capitals.txt", "r");
	fseek(p, (flag - 1) * 30, SEEK_SET);
	fgets(otvet, 30, p);
	fclose(p);
	return otvet;
}
char newgamecapital::getFlagHintLetter(int flag)
{
	return 'c';
}
string newgamecapital::getFlagHintLocation(int flag)
{
	return "";
}