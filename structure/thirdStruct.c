#include<stdio.h>
#include<string.h>

struct Student{
	char name[50];
	char address[50];
	int roll;
	int age;
	float marks;
} a,b,c;

void print_student(char name[50],int age){
	printf("your name is: %s and you are: %d years old.", name, age);
}

int main(){
	strcpy(a.name, "krishna mandal");
	a.roll = 10;	
	strcpy(a.address, "katahari");
	a.age=24;
	a.marks=99.99;
	
	print_student(a.name, a.age);

	strcpy(b.name, "Binod mandal");
	b.roll = 11;	
	strcpy(b.address, "KTM");
	b.marks=51.69;

	strcpy(c.name, "chintu");
	c.roll = 10;	
	strcpy(c.address, "Chitwan");
	c.marks=88.45;

	/*
	printf("A's name is: %s\n", a.name);
	printf("A's address is: %s\n", a.address);
	printf("A's roll no is: %d\n", a.roll);
	printf("A's mark is: %f\n", a.marks);
	*/
	return 0;
}