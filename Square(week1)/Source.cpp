#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int r = 0; r < n; r++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}