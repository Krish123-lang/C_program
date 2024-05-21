#include<stdio.h>
#include<string.h>

// Creating structure
struct Student{
	int id;
	int marks;
	char favChar;
	char name[];
};

int main(){
	struct Student krishna, avishek, dipson;
	krishna.id=1;
	krishna.marks=80;
	krishna.favChar='p';
	strcpy(krishna.name, "krishna mandal"); // copies krishna mandal to krishna.name

	avishek.id=2;
	avishek.marks=66;
	avishek.favChar='a';

	dipson.id=3;
	dipson.marks=78;
	dipson.favChar='d';

	printf("krishna id: %d\n", krishna.id);
	printf("krishna marks: %d\n", krishna.marks);
	printf("krishna Fav Char: %c\n", krishna.favChar);
	printf("krishna's name is: %s\n", krishna.name);

	printf("avishek id: %d\n", avishek.id);
	printf("avishek marks: %d\n", avishek.marks);
	printf("avishek Fav Char: %c\n", avishek.favChar);

	printf("dipson id: %d\n", dipson.id);
	printf("dipson marks: %d\n", dipson.marks);
	printf("dipson Fav Char: %c\n", dipson.favChar);
	
	return 0;
}