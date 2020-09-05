#include<stdio.h>
int main()
{
	int row, num, star, j = 1,i=2;
	printf("Enter Num : ");
	scanf_s("%d", &num);

	for (row = 1;row <= num;row++)
	{
		for (star = 1;star <= num;star++)
		{
			printf("%d%d", j, i);
		}
		printf("\n");
	}
}