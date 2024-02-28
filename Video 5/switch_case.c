#include <stdio.h>

int main()
{
    int val;
    float charchar;
    // val = 1;
    printf("Enter The Value :- ");
    scanf("%d", &val);

    printf("Enter The following :- ");
    scanf("%f", &charchar);

    printf("%f", charchar);

    switch (val)
    {
        case  1:
            printf("Hello, world\n");
            break;

        case 2:
            printf("Goodbye, world\n");
            break;

        default:
            printf("I don't know what you mean on my value status\n");
            break;
    }
    return 0;
}
