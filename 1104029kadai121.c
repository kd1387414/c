#include<stdio.h>
main()
{
	int num[2] = { 100, 10 };
	int* p;
	p = &num;
	printf("100+10=%d", num + num);
	printf("100-10=%d", num - num);
	printf("100*10=%d", num * num);
	printf("100/10=%d", num / num);
}