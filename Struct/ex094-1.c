#include<stdio.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day birth;
	char blood[5];
};
main()
{
	struct profile pdat[5] = {
		{"�V�����N",{2000,2,1},"A"},
		{"�N���X",{2001,8,5},"B"},
		{"�T�g�V",{2002,2,27},"O"},
		{"�W���[�J�[",{2003,2,1},"AB"},
		{"���t�B",{2004,4,1},"A"},
	};
	struct profile *p;
	
	int i;

	p = pdat;

	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki==2)
		{
			printf("%s--%d�N%d��%d�����܂�@���t�^-%s�^\n",
				p->name,p->birth.nen,p->birth.tuki,p->birth.hi, p->blood);
		}
		p++;
	}
}