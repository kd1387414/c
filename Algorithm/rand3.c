#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k;
	srand(time(0));
	k = rand() % 101;
	if (k <= 30) {
		printf("��������̂��������I");
	}
	else{
		printf("�ʏ�U��");
	}
}