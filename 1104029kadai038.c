#include<stdio.h>
main()
{
	char ch;
	printf("�P�������́H");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z')
	{
		printf("�ϊ����ʂ�%c", ch + 0x20);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("�ϊ����ʂ�%c", ch - 0x20);
	}
	else
	{
		printf("�ϊ����ʂ�%c", ch);
	}
}