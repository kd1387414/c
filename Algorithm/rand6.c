#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int player,cpu;
	srand(time(0));
	printf("�����o���܂����H\n(�P:�O�[ �Q:�`���L �R:�p�[)��");
	scanf("%d", &player);
	if (player == 0)printf("�v���C���[�̓O�[�ł��B\n");
	if (player == 1)printf("�v���C���[�̓`���L�ł��B\n");
	if (player == 2)printf("�v���C���[�̓p�[�ł��B\n");
	cpu = rand() % 3;
	if (cpu == 0)printf("�R���s���[�^�̓O�[�ł��B\n");
	if (cpu == 1)printf("�R���s���[�^�̓`���L�ł��B\n");
	if (cpu == 2)printf("�R���s���[�^�̓p�[�ł��B\n");
	if (player == cpu) {
		printf("�������ł��B\n");
	}
	if (player == 0) {
		if (cpu == 1)printf("�v���C���[�̏����ł��B\n");
		if (cpu == 2)printf("�b�o�t�̏����ł��B\n");
	}
	if(player=1){

	}
}