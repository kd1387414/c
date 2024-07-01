#include<stdio.h>
typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;

typedef struct {
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;

void Setinfo(Soldier* s, char* filename);
void Display(Soldier s);
main(){
	Soldier sol;
	Setinfo(&sol, "file03.txt");
	Display(sol);
}
void Setinfo(Soldier* s, char* filename) {
	FILE* fp;
	fp = fopen(filename, "r");
	fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
	fclose(fp);
}
void Display(Soldier s) {
	printf("���O:%s �̗�:%d\n���햼:%s �c�i��:%d �U����:%.2f\n", s.name, s.hp, s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
}