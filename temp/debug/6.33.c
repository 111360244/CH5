#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int left=0, right=9, mid, key;
	int b = 0;
	int num[10] = { 5, 12, 20, 34, 42,  55 , 56, 75,  84, 93 };

	printf("輸入要找的數(從 5, 12, 20, 34, 42,  55 , 56, 75,  84, 93) :");
	scanf("%d", &key);

	b = a(num, left, right, key);

	if (b >= 0)
		printf("%d位置在:第%d個\n", key, b);
	else 
		printf("找不到此數\n");

	return 0;
}

int a(int list[], int left, int right, int key)
{
	int mid = (left + right) / 2;

	if (left <= right)
	{
		if (key == list[mid])
			return(mid);
		else if (key > list[mid])
			return(a(list, mid + 1, right, key));
		else if(key<list[mid])
			return(a(list, left, mid - 1, key));

	}
	else
		return(-1);

}