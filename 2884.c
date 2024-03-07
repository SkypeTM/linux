#include <stdio.h>

int main(){
    int h, m = 0;
    scanf("%d %d", &h, &m);
    if(m < 45){
        if(h==0){
            h = 23;
            printf("%d %d\n", h, m+15);
        }
        else{
            printf("%d %d\n", h-1, m+15);
        }
    }
    else{
        printf("%d %d\n", h, m-45);
    }
    return 0;
}