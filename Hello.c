#include <stdio.h>
int main(void)
{
    greeting("Developer A,B,C !!");
    farewell("Developer A,B,C");
    return 0;
}

int greeting(const char *name)
{
    printf("Hello, %s!\n", name);
    return 0;
}

int farewell(const char *name)
{
printf("Goodbye, %s!\n", name);
return 0;
}