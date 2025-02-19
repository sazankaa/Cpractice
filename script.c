#include <stdio.h>
#include "rotate.h"
#include<math.h>
#include<stdlib.h>

int main(int argc, char *argv[])//./exe 2 6
{
    if(argc != 3){
        fprintf(stderr, "Usage: %s length\n", argv[0]);
        return(1);
    }

    char *err1, *err2;
    int x, y;
    if((x=(double)strtol(*(argv+1), &err1, 10) <= 0 || *err1 != '\0')){
        fprintf(stderr, "Illegal Parameter: %s\n", argv[1]);
        return(2);
    }

    if((y=(double)strtol(*(argv+2), &err2, 10) <= 0 || *err2 != '\0')){
        fprintf(stderr, "Illegal Parameter: %s\n", argv[2]);
        return(2);
    }

    if (x <= 0 || y <= 0){
        fprintf(stderr, "should be bigger than 0!");
        return(2);
    }

    rotate(&x, &y);

    double ans;
    if (((x - y) % 2) == 1 ){
        ans = x * y;
    } else {
        ans = pow(x,y);
    }

}