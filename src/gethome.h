#ifndef GETHOME_H
    #define GETHOME_H
#endif

#ifndef _WIN32
    #include <sys/types.h>
    #include <stdlib.h>
    #include <pwd.h>

    #include "linux/gh_posix.h"
#else
    #include <unistd.h>
    #include <string.h>

    #include "windows/gh_win32.h"
#endif

