#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int s,k,cnt;
	
	srand(time(0));
	s = rand() % 1000 + 1;
	printf("1`1000‚Ì’†‚Å‚ ‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	do {
		printf("“–‚½‚è‚Ì”‚ÍH->");
		scanf("%d", &k);
		if (s > k) {
			printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		if (s < k) {
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		cnt++;
	} while (s != k);
	printf("³‰ğI%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½\n",cnt);
}