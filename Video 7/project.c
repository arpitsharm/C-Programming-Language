#include <stdio.h>

// Solve the problem for the code and paste on description box

int addition(int a, int b){
    printf("%d", a + b);
}

int subtraction(int a, int b){
    printf("%d", a - b);
}

int multiplication(int a, int b){
    printf("%d", a * b);
}

int division(int a, int b){
    printf("%d", a / b);
}

int main()
{
    int choice, val1, val2;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter Your Choice :- ");
    scanf("%d", &choice);

    printf("Enter Your Value 1 :- ");
    scanf("%d", &val1);

    printf("Enter Your Value 2 :- ");
    scanf("%d", &val2);

    switch (choice){
        case 1:
            addition(val1, val2);

        case 2:
            subtraction(val1, val2);

        case 3:
            multiplication(val1, val2);

        case 4:
            division(val1, val2);
    }

    return 0;
}
