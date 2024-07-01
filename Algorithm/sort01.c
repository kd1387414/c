#include<stdio.h>
main()
{
	int d[] = {30, 7, 25, 16, 10};
	int i, j,w;
	for (i = 0; i < 4; i++) 
	{
		for (j = i + 1; j < 5; j++)
		{
			if (d[i] > d[j])
			{
				w = d[j];
				d[j] = d[i];
				d[i] = w;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}