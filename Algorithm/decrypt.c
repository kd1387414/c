#include<stdio.h>
main()
{
	char s[81];
	int i;
	printf("�Í������������͂��Ă�������");
	scanf("%s", s);
	i = 0;
	while (s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("�����ςݕ�����́A%s\n", s);
}