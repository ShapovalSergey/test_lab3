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
	string result;
	FILE* p = fopen("D:\\projects\\test_lab3\\test_lab3\\capitals.txt", "r");
	fseek(p, (flag - 1) * 30, SEEK_SET);
	fgets(otvet, 30, p);
	fclose(p);
	result = strtok(otvet," ");
	return result;
}
string newgamecapital::getFlagHintLocation(int flag)
{
	char a[2];
	string result;
	FILE* p = fopen("D:\\projects\\test_lab3\\test_lab3\\hints.txt", "r");
	fseek(p, (flag - 1) * 2, SEEK_SET);
	fgets(a, 2, p);
	fclose(p);
	if (a[0] == '1')
	{
		result = "������";
	}
	else if (a[0] == '2')
	{
		result = "�������� �������";
	}
	else if (a[0] == '3')
	{
		result = "����� �������";
	}
	else if (a[0] == '4')
	{
		result = "����";
	}
	else if (a[0] == '5')
	{
		result = "������";
	}
	else if (a[0] == '6')
	{
		result = "�������";
	}
	return result;
}
string newgamecapital::getFlagHintLetter(int flag)
{
	return "";
}