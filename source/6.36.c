#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char a[60];
	printf("請輸入字串:");
	scanf("%s",a);
	stringReverse(a);
	printf("轉換後:%s", a);
}

int stringReverse(char a[])
{
	int n = strlen(a);
	for (int i = 0; i < n / 2; i++)
	{
		char x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
	return a;
}