#include<stdio.h>

/*
void greet(char name[], int age)
{
	printf("Hello, %s\nYou are %d years old.", name, age);
}

int main(){
	greet("Krishna", 23);
	return 0;
}
*/

/*
Hello, Krishna
You are 23 years old.
*/
// *************************************************************

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNumbers[i]);
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}

/*
10
20
30
40
50
*/