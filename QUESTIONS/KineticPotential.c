#include<stdio.h>
int main()
{
	const float g=9.8;
	float kp, m, v, h;
	
	printf("Enter mass: ");
	scanf("%f", &m);

	printf("Enter volume: ");
	scanf("%f", &v);

	printf("Enter height: ");
	scanf("%f", &h);

	kp=1/2*(m*v*v)+m*g*h;
	printf("%f\n", kp);

	return 0;
}

/*
Enter mass: 7
Enter volume: 5
Enter height: 3
205.800003
*/