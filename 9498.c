#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d",&n);
    
    if(n>=90 && n<= 100){
        printf("A\n");
    }
    else if(n>=80 && n<90){
        printf("B\n");
    }
    else if(n>=70 && n<80){
        printf("C\n");
    }
    else if(n>=60 && n<70){
        printf("D\n");
    }
    else{
        printf("F\n");
    }
    return 0;
}