#include <stdio.h>
int main(void)
{
    //Print a greeting message for the specified user
    greeting("Developer A, B, C !!");
    return 0;
}

int greeting(const char *name)
{
    printf("Hello, %s!\n", name);
    return 0;
}