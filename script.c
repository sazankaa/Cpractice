#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 3){
        fprintf(stderr, "Usage: %s length\n", argv[0]);
        return(1);
    }
    
}