#include<stdio.h>
#include<math.h>
int main()
{
	int level, i, j, star, space;
	printf("Enter number : ");
	scanf_s("%d", &level);
	printf("\n");
	for (i = 1;i <= 2 * level - 1;i++)
	{
		space = abs(level - i);
		star = 2 * (level - abs(level - i)) - 1;
		for (j = 1;j <= space;j++)
		{
			printf(" ");
		}
		for (j = 1;j <= star;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}