#include<stdio.h>
main( )
{
	int sun1,sun2,sun3,gokei;
	printf("�������R����:");
	scanf("%d%d%d",&sun1,&sun2,&sun3);
	gokei=sun1+sun2+sun3;
	printf("���v��%d",gokei);
	//printf("����=%.2f",gokei/3.0);
	printf("����=%.2f",(float)gokei/3);
}