#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun(int a)
{
	int b = 0;
	b++;
	return (a + b);
}

void main()
{
	int a = 1;
	printf("%d\n", fun(a));
	return 0;
}