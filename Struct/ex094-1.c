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
		{"シュルク",{2000,2,1},"A"},
		{"クリス",{2001,8,5},"B"},
		{"サトシ",{2002,2,27},"O"},
		{"ジョーカー",{2003,2,1},"AB"},
		{"ルフィ",{2004,4,1},"A"},
	};
	struct profile *p;
	
	int i;

	p = pdat;

	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki==2)
		{
			printf("%s--%d年%d月%d日生まれ　血液型-%s型\n",
				p->name,p->birth.nen,p->birth.tuki,p->birth.hi, p->blood);
		}
		p++;
	}
}