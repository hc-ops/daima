#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	c = (a -= a - 5), (a = b, b + 3);
	printf("%d,%d,%d\n", a, b, c);
}