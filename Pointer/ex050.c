#include<stdio.h>
main()
{
	int a = 100;  
	int *p_a;
	p_a = &a;        
	printf("a=%d &a=%d\n ",a,&a);
	printf("p_a=%d *p_a=%d &p_a=%d\n", p_a, *p_a, &p_a);
}