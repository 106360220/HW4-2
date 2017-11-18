#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main()
{
	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int pass;
	size_t i;
	int hold;
	printf("Data items in original order\n");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	for (pass = 1; pass < SIZE - 1; ++pass)
	{
		for (i = 0; i < SIZE - 1; ++i)
		{
			if (a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
		if (a[i] <= a[i + 1])
		{
			break;
		}
	}
	printf("\ndata items in ascending order\n");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	system("pause");
}