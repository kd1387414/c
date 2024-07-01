#include<stdio.h>
main()
{
	int i, j, a;
	printf("”‚ÍH");
	scanf("%d", &a);
	i = 0;
	do {
		j = 0;
		do {
			printf(" ");
			j =j++;
		} while (j < a - i);
		j = 0;
		do {
			printf("*");
			j = j++;
		} while (j <= i);
		printf("\n");
		i = i++;
		} while (i < a);
}