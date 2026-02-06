#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* preload = getenv("LD_PRELOAD");
    if (preload)
        printf("LD_PRELOAD is: %s\n", preload);
    else
        printf("LD_PRELOAD is NOT set\n");
    return 0;
}
