#include <stdio.h>
#include <string.h>

int main(){
    int n = 0;
    char arr[1000000] ="";    
    scanf("%[^\n]s", arr);
    int wordFlag = 0;
    for(int i = 0; i < sizeof(arr); i++){
        //문자 이후, 공백을 만나면 단어, 혹은 이스케이프 문
        if((arr[i] > 64 && arr[i] < 123) && wordFlag == 0){
            wordFlag = 1;
            continue;
        }
        else if (arr[i] == ' ' && wordFlag == 1){
            n++;
            wordFlag = 0;
        }
        else if (arr[i] == '\0'){
            if(wordFlag == 1){
                n++;
            }
            break;
        }
    }
    printf("%d\n", n);
    return 0;
}