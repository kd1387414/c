#include<stdio.h>
main()
{
	int d[11] = {9, 10, 12, 25, 37, 49, 53, 68, 74, 82};
	int low, high, mid, s;

	printf("’Tõ’l‚ğ“ü—Í:");
	scanf("%d", &s);
	low = 0;
	high = 10;
	while (low <= high) {
		mid = (low + high) / 2;
		if (s == d[mid]){
			break;
	}
	if (s > d[mid]) {
		low = mid + 1;
	}
	else {
		high = mid - 1;
	}
	}
	if (low > high) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("%d",mid);
	}
}