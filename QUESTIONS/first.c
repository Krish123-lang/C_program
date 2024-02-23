#include<stdio.h>
int main()
{	
	int a=5,b,c;
	b=++a + a++;
	printf("a=%d and b=%d", a,b);
	return 0;
}
/*
a=7 and b=13
*/