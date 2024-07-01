#include<stdio.h>
main()
{
	char moji,ia;
	moji = 'A';
	for (moji = 'A'; moji <= 'Z'; moji + 0X1)
	{
		printf("%c ", moji);
		moji += 0X1;
	}
}