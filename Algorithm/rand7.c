#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int s,k,cnt;
	
	srand(time(0));
	s = rand() % 1000 + 1;
	printf("1�`1000�̒��ł�����̐���\�z���Ă�������\n");
	do {
		printf("������̐��́H->");
		scanf("%d", &k);
		if (s > k) {
			printf("������̐���菬�����ł�\n");
		}
		if (s < k) {
			printf("������̐����傫���ł�\n");
		}
		cnt++;
	} while (s != k);
	printf("�����I%d��ڂœ�����܂���\n",cnt);
}