#include<stdio.h>
main()
{
	int gokei,i;
	i = 1;
	gokei = 0;
	while (gokei <= 300)
	{
		gokei = gokei + i;
		printf("%d", i);
		printf("+");
		i++;
	}
	printf("=%d", gokei);
}