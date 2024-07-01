#include<stdio.h>
main()
{
	int gokei=0, i=0;
	while (gokei <= 300) {
		printf("%d+", i);
		gokei += i;
		i++;
	}
	printf("\b=%d", gokei);
}