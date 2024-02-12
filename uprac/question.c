#include <stdio.h>
int main()
{
    int a = 5, b, c;
    b = ++a + a++;
    printf("a=%d\n and b=%d\n and c=%d", a, b, c);
    return 0;
}