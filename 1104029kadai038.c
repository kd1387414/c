#include<stdio.h>
main()
{
	char ch;
	printf("１文字入力？");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z')
	{
		printf("変換結果は%c", ch + 0x20);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("変換結果は%c", ch - 0x20);
	}
	else
	{
		printf("変換結果は%c", ch);
	}
}