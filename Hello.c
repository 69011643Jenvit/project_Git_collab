#include <stdio.h>
int main(void)
{
checkin("Developer A,B,C");
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
    // Print a farewell message forthe specified user
printf("Goodbye, %s!\n", name);
return 0;
}

int checkin(const char *name)
{
// Print a check in message for the specified user
printf("%s are checked in\n", name);
return 0;
}