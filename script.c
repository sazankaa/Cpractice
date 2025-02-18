#include<stdio.h>

int main(void){
    //タスク表示関数

    char del_flag;
    printf("Is there completed task？(y or n)\n");
    scanf("%c\n", del_flag);

    if (del_flag == 'y'){
        printf("enter the completed task's ID\n");
        //タスク削除関数
    } else if (del_flag == 'n'){
        printf("\n");
    } else {
        fprintf(stderr,"enter y or n");
        return(1);
    }

    char add_flag;
    printf("Is there added task？(y or n)\n");
    scanf("%c\n", add_flag);

    if (add_flag == 'y'){
        //タスク追加関数
    } else if (add_flag == 'n'){
            printf("fine!");
            return(0);
    } else {
        fprintf(stderr, "enter y or n");
        return(1);
    }