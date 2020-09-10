#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int r = 0; r < a - 1; r++)
	{
		for (int s = 0; s < a - r - 1; s++)
		{
			printf(" ");
		}
		for (int c = 0; c <= r; c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int c = 0; c < a; c++)
	{
		printf("* ");
	}
	printf("\n");
	for (int r = 0; r < a - 1; r++)
	{
		for (int s = 0; s <= r; s++)
		{
			printf(" ");
		}
		for (int c = 0; c < a - r - 1; c++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
