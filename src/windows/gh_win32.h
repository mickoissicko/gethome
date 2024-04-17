#ifndef GETHOME_WIN32_H
    #define GETHOME_WIN32_H
#endif

#include "../common.h"

static char* Posix_Path()
{
    struct passwd *Home;

    char* Path = NULL;

    if ((Home = getpwuid(getuid())) != NULL)
    {
        Path = (char*)malloc(MAX_STR_LEN);

        if (Path != NULL)
            strcpy(Path, Home->pw_dir);
    }

    return Path;
}

