#include<stdio.h>
main()
{
	char s[81];
	int i;
	printf("暗号化文字列を入力してください");
	scanf("%s", s);
	i = 0;
	while (s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("復号済み文字列は、%s\n", s);
}