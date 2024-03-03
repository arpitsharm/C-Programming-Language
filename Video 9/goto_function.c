#include <stdio.h>

int func(){
    printf("hello");
    return 0;
}
int main()
{
    label:
        printf("label\n");

    end:
        printf("end\n");

    goto label;
    goto end;

    // goto func;  // label "func" was referenced but not defined
    func();
    return 0;
}