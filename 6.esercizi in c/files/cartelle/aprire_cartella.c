#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void main(){    

    const char *name = "prova";
    mkdir(name);
    exit(EXIT_SUCCESS);
}