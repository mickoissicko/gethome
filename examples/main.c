#include "../lib/gethome.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* Path = (char*)malloc(8192);

    Path = gethome();
    printf("Home DIR: %s\n", Path);

    free(Path);
    return 0;
}

