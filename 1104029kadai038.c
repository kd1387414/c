#include<stdio.h>
main()
{
	char ch;
	printf("‚P•¶Žš“ü—ÍH");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", ch + 0x20);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", ch - 0x20);
	}
	else
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", ch);
	}
}