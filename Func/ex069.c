#include<stdio.h>
main()
{
	int num, sum, cnt;
	sum = cnt = 0;
	printf("•Ï”:");
	while (scanf("%d", &num) != EOF) {
		sum += num;
		cnt++;
		printf("®”:");
	}
	printf("‡Œv=%d@•½‹Ï%.2f", sum, (float)sum/cnt);
}