#include<stdio.h>
main()
{
	int d[11] = { 51,7,28,10,25,93,74,86,20,49,12 };
	int i, s;

	printf("�T���ls�����");
	scanf("%d", &s);
	for (d[10] = s, i = 0; s != d[i]; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("d[%d]�ɂ�����\n", i);
	}
}