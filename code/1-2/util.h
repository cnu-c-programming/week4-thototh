#include <stdio.h>
#include <stdarg.h>

static inline void logger(char* message){
    printf("log: %s\n", message);
}

