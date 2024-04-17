#ifndef GETHOME_H
    #define GETHOME_H
#endif

#ifndef _WIN32
    #include "os/linux.h"
    static char* gethome();

/**
* #elif __APPLE__
*     #include "os/macos.h"
*     static char* gethome();
**/

#else
    #include "os/win32.h"
    static char* gethome();
#endif

