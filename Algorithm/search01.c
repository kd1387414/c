#include<stdio.h>
main()
{
	int s, i, d[] = {9, 57, 34, 97, 21, 37, 8, 12, 25,108};

		printf("’Tõ’l‚ÍH");
	scanf("%d", &s);
	for (i = 0; i < 10; i++)
	{
		if(s==d[i])
		{
			break;
		}
	}

	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("d[%d]‚É‚ ‚Á‚½\n", i);
	}
}