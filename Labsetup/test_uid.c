#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    printf("Real UID: %d\n", getuid());
    printf("Effective UID: %d\n", geteuid());
    printf("LD_PRELOAD: %s\n", getenv("LD_PRELOAD"));
    sleep(1);
    return 0;
}
