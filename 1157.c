#include <stdio.h>
#include <string.h>

void max(char* word);

int main(){
    char word[1000001] = "";
    scanf("%s", word);
    max(word);
    return 0;
}

void max(char* word){
    int wordCnt[26] = {0};
    for(int i = 0; i <= strlen(word); i++){
        wordCnt[word[i]] += 1;
    }

    int tempMax = 0;
    int sameFlag = 0;
    for(int i = 1; i < sizeof(wordCnt); i++){
        if(wordCnt[i] > wordCnt[i-1]){
            tempMax = i;
            sameFlag = 0;
        }
        else if(wordCnt[i] == tempMax){
            sameFlag = 1;
            continue;
        }
    }
    
    if(sameFlag == 1){
        printf("?\n");
    }
    else{
        printf("%c", tempMax+65);
    }
}