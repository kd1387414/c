#include<stdio.h>
main()
{
	int i;
	printf("整数？");
	scanf("%d", &i);
while (i != -999)

	{
		printf("８進数=%o ", i);
		printf(" １６進数=%x\n", i);
		printf("整数？");
		scanf("%d", &i);
	}
}