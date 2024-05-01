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
	char otvet[30];
	string result;
	FILE* p = fopen("D:\\projects\\test_lab3\\test_lab3\\countries.txt", "r");
	fseek(p, (flag - 1) * 30, SEEK_SET);
	fgets(otvet, 30, p);
	fclose(p);
	result = strtok(otvet, " ");
	return result;
}
string newgamecountry::getFlagHintLocation(int flag)
{
	return "";
}