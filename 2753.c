#include <stdio.h>

int main(){
    int y = 0;
    scanf("%d",&y);

    if(y%4==0 && y%100!=0){
        printf("1\n");
    }
    else if(y%400==0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}