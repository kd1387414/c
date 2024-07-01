#include<stdio.h>
main()
{
	int i = 1;
	do 
	{
		if (i < 10) 
		{
		printf("%d ", i);
		i++;
		if (i % 10 == 1) 
		    {
			printf("\n");
		    }
		}
		else 
		{
			printf("%d ", i);
			i++;
			if (i % 10 == 1) {
				printf("\n");
			}
		}
	} while (i <= 20);
}