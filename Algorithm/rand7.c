#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int s,k,cnt;
	
	srand(time(0));
	s = rand() % 1000 + 1;
	printf("1〜1000の中であたりの数を予想してください\n");
	do {
		printf("当たりの数は？->");
		scanf("%d", &k);
		if (s > k) {
			printf("当たりの数より小さいです\n");
		}
		if (s < k) {
			printf("当たりの数より大きいです\n");
		}
		cnt++;
	} while (s != k);
	printf("正解！%d回目で当たりました\n",cnt);
}