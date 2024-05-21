#include<stdio.h>
#include<string.h>

struct Student{
	char name[50];
	char address[50];
	int roll;
	float marks;
} a,b,c;

int main(){
	strcpy(a.name, "krishna mandal");
	a.roll = 10;	
	strcpy(a.address, "katahari");
	a.marks=99.99;

	strcpy(b.name, "Binod mandal");
	b.roll = 11;	
	strcpy(b.address, "KTM");
	b.marks=51.69;

	strcpy(c.name, "chintu");
	c.roll = 10;	
	strcpy(c.address, "Chitwan");
	c.marks=88.45;

	printf("A's name is: %s\n", a.name);
	printf("A's address is: %s\n", a.address);
	printf("A's roll no is: %d\n", a.roll);
	printf("A's mark is: %f\n", a.marks);

	return 0;
}