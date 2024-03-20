#include<stdio.h>
#include<string.h>
int main(){
    char fullname[30];
    printf("enter full name: ");
    fgets(fullname, sizeof(fullname), stdin);

    printf("Hello, %s", fullname);
    return 0;
}
/*
enter full name: krishna mandal
Hello, krishna mandal
*/