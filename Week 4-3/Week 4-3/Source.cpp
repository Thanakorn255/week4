#include<stdio.h>
int main()
{
	int row, level, star;
	printf("Enter level : ");
	scanf_s("%d", &level);
	for (row = 1;row <= level;row++)
	{
		for (star = 1;star <= level;star++)
		{
			if (star >= row)
			{
				printf("*1");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}