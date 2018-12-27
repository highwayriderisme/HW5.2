#include <stdio.h>
#include <stdlib.h>
int my_strlen();
int main(void)
{
	char a[100];
	char b[100];
	int i = 0;
	int j;
	int l;
	gets(a);
	l = my_strlen(a);
	printf("¦r¦êªø=%d\n", l-1);
	while (l >= 0)
		b[l--] = a[i++];
	for (j = 0; j <= my_strlen(a); j++)
	{
		printf("%c", b[j]);
	}
	printf("\n");
	system("pause");
	return 0;
}

int my_strlen(char *a)
{
	int i = 1;
	while (i >= 1)
	{
		if (a[i] == '\0')
			break;
		else
			i++;
	}
	i++;
	return i;
}