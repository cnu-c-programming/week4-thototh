#include <stdio.h>
#include <stdarg.h>

static inline void logger(char* message){
    pfrintf("log: %s\n", message);
}
