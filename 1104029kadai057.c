#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &moji);
	for (moji >= 'a'; moji <= 'z'; moji++)
	{
		printf("%c ", moji - 0x20);
	}
}