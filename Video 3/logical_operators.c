#include <stdio.h>

int main()
{
    int a, b;
    a = 3;
    b = 3;
    printf("%d\n", a && b);
    printf("%d\n", a || b);
    printf("%d\n", !(a && b));
    return 0;
}