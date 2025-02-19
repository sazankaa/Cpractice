#include <stdio.h>
#include "rotate.h"

int main(int argc, char *argv[])//./exe 2 6
{
    if(argc != 3){
        fprintf(stderr, "Usage: %s length\n", argv[0]);
        return(1);
    }

    if (*(argv+1) <= 0 || *(argv+2) <= 0){
        fprintf(stderr, "should be bigger than 0!");
        return(2);
    }

    r
}