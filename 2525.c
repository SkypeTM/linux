#include <stdio.h>

int main(){
    int a, b, t = 0;
    scanf("%d %d\n%d", &a, &b, &t);
    int h, m = 0;
    h = t/60;
    m = t%60; 

    if(b+m >= 60){
        if(a+h >= 23){
            a-=24;
            printf("%d %d\n", a+h+1, b+m-60);
        }
        else{
            printf("%d %d\n", a+h+1, b+m-60);
        }
    }
    else{
        if(a+h >= 24){
            a-=24;
            printf("%d %d\n", a+h, b+m);
        }
        else{
            printf("%d %d\n", a+h, b+m);
        }
    }
    return 0;
}