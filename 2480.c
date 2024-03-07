#include <stdio.h>

int main(){
    int d1, d2, d3 = 0;
    scanf("%d %d %d", &d1, &d2, &d3);

    if(d1 == d2 && d2 == d3){
        printf("%d", 10000+(1000*d1));
    }
    else if(d1 == d2){
        printf("%d", 1000+(100*d1));
    }
    else if(d2 == d3){
        printf("%d", 1000+(100*d2));
    }
    else if(d1 == d3){
        printf("%d", 1000+(100*d3));
    }
    else{
        int max = d1;
        if(max < d2){
            max = d2;
        }
        if(max < d3){
            max = d3;
        }
        printf("%d", max*100);
    }
    return 0;
}