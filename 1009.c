#include <stdio.h>

int main(){
    int num = 0;
    scanf("%d", &num);
    
    while(num--){
        long a, b;
        scanf("%ld, %ld", &a, &b);

        long ans = a;
        
        for(long i = 2; i <= b; i++){
            ans = (ans*a)%10;
        }

        if(ans==0){
            ans = 10;
        }
        printf("%ld\n", ans);
    }
    return 0;
}