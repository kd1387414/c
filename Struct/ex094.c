#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile pdat[5];
	struct profile *p;
	p = &pdat[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d�l��(���O):",i+1);
		scanf("%s", p->name);
		printf("%d�l��(���N����)",i+1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1],&p->birth[2]);
		printf("%d�l��(���t�^)",i+1);
		scanf("%s", p->blood);
		p++;
	}
	p = &pdat[5];

	for (i = 0; i < 5; i++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%s--%d�N%d��%d�����܂�@���t�^-%s�^\n",
				p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
		p++;
	}
}