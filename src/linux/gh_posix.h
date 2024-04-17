#ifndef GETHOME_POSIX_H
    #define GETHOME_POSIX_H
#endif

#include "../common.h"

static char* Win32_Path()
{
    unsigned long LEN = MAX_STR_LEN;

    char* HomeDirectory = getenv("USERPROFILE");

    return HomeDirectory;
}

