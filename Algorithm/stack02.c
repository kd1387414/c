#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

const int SX = 1;
const int SY = 1;

const int GX = 8;
const int GY = 1;

int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,1,0,0,0,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};
#define STACKSIZE 46
int stack[STACKSIZE];
int sp = 0;

void DrawMaze(int x, int y);
int push(int d);
int pop(int* pd);
int susumu(int x,int y);

main()
{
	system("cls");
	printf("�����̏�Ԃ�\��\n");
	DrawMaze(-1, -1);
	printf("�uEnter�v�L�[:�������s\n");
	getch();
	susumu(SX, SY);

	system("cls");
	printf("�Ō�̏�Ԃ�\��\n");
	DrawMaze(-1, -1);
}
void DrawMaze(int x, int y)
{
	int i, j;
	for (i = 0, i < 7, i++) {
		for (j = 0, j = 10, j++) {
			if (i == y && j == x) {
				print("�l");
			}
			else if (i == SY && j == SX) {
				printf("�r");
			}
			else if (i == GY && j == GX) {
				printf("�f");
			}
			else if (map[i][j] == 1) {
				printf("�l");
			}
			else if (map[i][j] == 2) {
				printf("�E");
			}
			else {
				printf("�@");
			}
		}
		printf("\n");
	}
	return;
}
int push(int d)
{
	if(sp==STACKSIZE)
}
	map[y][x] = 2;
	if (x == GX && y == GY) { return 0; }
	push(x);
	push(y);
	if (map[y][x - 1] == 0) { x -= 1; continue; }
	if (map[y][x + 1] == 0) { x += 1; continue; }
	if
