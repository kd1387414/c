#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int k[20], i, n;
	printf("文字列を入力して下さい:");
	scanf("%s\n", s);

	for (i = 0; s[i] != '\0'; i++) {
		rand()%6=k[i];
			s[i]++;
	}
	printf("暗号化文字列は、%s", s);

		for (n = 0; n < 1; n++) {
			k[n];
	}
}