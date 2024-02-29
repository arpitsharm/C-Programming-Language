#include <stdio.h>

int main()
{
    int a;
    a = 0;
    printf("Enter Your Value :- \n");
    scanf("%d", &a);

    do
    {
        printf("Hello World");
    } while (a < 100);
    

    do
    {
        a = a + 1;
        printf("Hello World!\n");
    } while (a < 10);
    

    return 0;
}
