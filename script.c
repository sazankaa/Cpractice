#include <stdio.h>
#include "rotate.h"
#include <stdlib.h>

#define LENGTH 16

int main(int argc, char *argv[])//./exe 2 6
{
    if(argc != 3){
        fprintf(stderr, "Usage: %s length\n", argv[0]);
        return(1);
    }

    char *err1, *err2;
    double x, y;
    x=strtod(argv[1], &err1);
    if(*err1 != '\0'){
        fprintf(stderr, "Illegal Parameter: %s\n", argv[1]);
        return(2);
    }

    y=strtod(argv[2], &err2);
    if(*err2 != '\0'){
        fprintf(stderr, "Illegal Parameter: %s\n", argv[2]);
        return(2);
    }

    if (x <= 0 || y <= 0){
        fprintf(stderr, "should be bigger than 0!");
        return(2);
    }

    rotate(&x, &y);

    double ans;
    if (((int)(y - x) % 2) == 1 ){
        ans = x * y;
    } else {
        ans = pow(x,y);
    }

    char flname[16];
    int n;
    printf("new file name > ");
    fgets(flname, LENGTH, stdin);
    if(flname[n=strlen(flname)-1] == '\n') flname[n] = '\0';

    FILE *fp;
    if((fp = fopen(flname, "a")) == NULL){
        fprintf(stderr, "Can't open file\n");
        return(4);
    }

    fprintf(fp, "answer = %lf\n", ans);
    fclose(fp);
    return(0);
}