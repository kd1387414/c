#include<stdio.h>
main()
{
	char s[81];
	int i;
	printf("•¶š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s",s);
	i = 0;
	while (s[i] != '\0') {
		s[i]++;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ‚Í%s", s);
}