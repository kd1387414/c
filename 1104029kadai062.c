#include<stdio.h>
main()
{
	int i = 20;
	do 
	{
		if (i > 10)
		{
			printf("%d ", i);
			i--;
			if (i % 10 == 0)
			{
			printf("\n");
			}
		}
		else
		{
			printf("%d ", i);
			i--;
			if (i % 10 == 0)
			{
				printf("\n");
			}
		}
	} while (i >= 1);
}