#include<stdio.h>
main()
{
	char s[81];
	int i;
	printf("文字を入力してください");
	scanf("%s",s);
	i = 0;
	while (s[i] != '\0') {
		s[i]++;
		i++;
	}
	printf("暗号化文字列は%s", s);
}