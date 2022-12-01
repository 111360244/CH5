#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(void)
{
	srand(time(0));
	int dice[13] = { 0 };

	int num1, num2, sum;

	for (int i = 0; i < 36000; i++)
	{
		num1 = (rand() % 6) + 1;
		num2 = (rand() % 6) + 1;
		sum = num1 + num2;
		dice[sum]++;
	}

	printf("點數總出現次數:\n");
	for (int i = 2; i <= 12; i++)
	{
		printf("%d點:%d\n", i, dice[i]);
	}

}