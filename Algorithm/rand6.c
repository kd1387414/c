#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int player,cpu;
	srand(time(0));
	printf("何を出しますか？\n(１:グー ２:チョキ ３:パー)＞");
	scanf("%d", &player);
	if (player == 0)printf("プレイヤーはグーです。\n");
	if (player == 1)printf("プレイヤーはチョキです。\n");
	if (player == 2)printf("プレイヤーはパーです。\n");
	cpu = rand() % 3;
	if (cpu == 0)printf("コンピュータはグーです。\n");
	if (cpu == 1)printf("コンピュータはチョキです。\n");
	if (cpu == 2)printf("コンピュータはパーです。\n");
	if (player == cpu) {
		printf("あいこです。\n");
	}
	if (player == 0) {
		if (cpu == 1)printf("プレイヤーの勝ちです。\n");
		if (cpu == 2)printf("ＣＰＵの勝ちです。\n");
	}
	if(player=1){

	}
}