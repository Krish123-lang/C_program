#include <stdio.h>
int main()
{
    int n1, n2;
    // int n1 = 5, n2 = 3, temp;

    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("%d %d\n", n1, n2);

    // With using 3rd variable
    /*
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("%d %d\n", n1, n2);
    */

    //    without using 3rd variable
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("%d %d\n", n1, n2);

    /*
    Output:
    5 3
    3 5
    */

    return 0;
}

/*
Output:
5 3
3 5
*/