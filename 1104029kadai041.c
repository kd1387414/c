#include<stdio.h>
main()
{
	int i,gokei,num;
	gokei = 0;
	num = 0;
	i = 0;
	printf("整数(-999で終了)？");
	scanf("%d", &num);
	while (num != -999) {
		gokei += num;
		printf("整数(-999で終了)？");
		scanf("%d", &num);
		i++;
	}
	printf("合計=%d\n", gokei);
	printf("平均=%.2f", (float)gokei / i);
}