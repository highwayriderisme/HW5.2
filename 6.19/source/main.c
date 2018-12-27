#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 13
int main()
{
	int a[SIZE],i,total;
	srand(time(NULL));
	for (total = 2; total <= 12; total++)
	{
		a[total] = 0;
	}
	for (i = 1; i <= 36000; i++)
	{
		int Dice1;
		int Dice2;
		Dice1 = 1 + rand() % 6;
		Dice2 = 1 + rand() % 6;
		total = Dice1 + Dice2;
		++a[total];
		
	}
	printf("%s%12s\n","point","frequency");
	for (total = 2; total <= 9; total++)
	{
		printf("%d%12d\n",total, a[total]);
	}
	for (total = 10; total <= 12; total++)
	{
		printf("%d%11d\n", total, a[total]);
	}
	system("pause");
	return 0;
}