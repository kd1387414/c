#include<stdio.h>
main()
{
	char s[81];
	int i;
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", s);
	i = 0;
	while (s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("•œ†Ï‚İ•¶š—ñ‚ÍA%s\n", s);
}