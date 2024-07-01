#include<stdio.h>
main()
{
	int i,a;
	printf("®”H");
	scanf("%d", &a);
	for (i = 1; i <= 11; i++)
	{
		printf("%d ", a++);
	}
}