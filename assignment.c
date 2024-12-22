#include <stdio.h>

int main()
{
    int x,a;
    scanf("%d", &x);
    scanf("%d", &a);

    a += x;
    printf("%d\n", a);

    a -= x;
    printf("%d\n", a);

    a *= x;
    printf("%d\n", a);

    a /= x;
    printf("%d\n", a);
}