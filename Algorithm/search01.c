#include<stdio.h>
main()
{
	int s, i, d[] = {9, 57, 34, 97, 21, 37, 8, 12, 25,108};

		printf("探索値は？");
	scanf("%d", &s);
	for (i = 0; i < 10; i++)
	{
		if(s==d[i])
		{
			break;
		}
	}

	if (i >= 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("d[%d]にあった\n", i);
	}
}