#include<stdio.h>
main()
{
	int i;
	printf("�����H");
	scanf("%d", &i);
	if (i > 0)
	{
		printf("���͒l�̓v���X�ł�");
	}
	else if (i < 0)
	{
		printf("���͒l�̓}�C�i�X�ł�");
	}
	else
	{
		printf("���͒l��0�ł�");
	}
}