#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int* p_a = &a, * p_b = &b;
	printf("é¿çsëO:a=%d\tb=%d\n", a, b);
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("é¿çså„:a=%d\tb=%d\n", a, b);
	printf("&a=%d\t%b=%d\t&w=%d\n", &a, &b, &w);
	printf("p_a=%d\tp_b=%d\n", p_a, p_b);
	printf("&p_a=%d\t&p_b=%d\n", &p_a, &p_b);
}