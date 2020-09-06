#include<stdio.h>
int main()
{
	int x, i, j;
	scanf_s("%d", &x);
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < x; j++)
		{
			if (i == 0 || i == x - 1 || j == 0 || j == x - 1)
			{
				printf("*");
			}
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}