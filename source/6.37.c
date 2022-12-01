#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort(int* const array, const int size);

int main(void)
{
	while (1)
	{
		int a[SIZE];
		int i;

		printf("Enter 10 numbers:");

		for (i = 0; i < SIZE; i++)
		{
			scanf("%d", &a[i]);
		}

		printf("Data items in original order\n");

		for (i = 0; i < SIZE; i++)
		{
			printf("%4d", a[i]);
		}

		bubbleSort(a, SIZE);

		printf("\nData items in ascending order\n");

		for (i = 0; i < SIZE; i++)
		{
			printf("%4d", a[i]);
		}

		printf("\nThe bigest value  is %d", a[9]);

		printf("\n");
	}
	system("pause");
	return 0;
}

void bubbleSort(int* const array, const int size)
{
	void swap(int* element1Ptr, int* element2Ptr);
	int pass;
	int j;

	for (pass = 0; pass < size - 1; pass++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

void swap(int* element1Ptr, int* element2Ptr)
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}