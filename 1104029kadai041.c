#include<stdio.h>
main()
{
	int i,gokei,num;
	gokei = 0;
	num = 0;
	i = 0;
	printf("����(-999�ŏI��)�H");
	scanf("%d", &num);
	while (num != -999) {
		gokei += num;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &num);
		i++;
	}
	printf("���v=%d\n", gokei);
	printf("����=%.2f", (float)gokei / i);
}