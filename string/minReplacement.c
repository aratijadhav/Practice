#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void minReplacement(char str[],int len){

    if(len > 26){
        printf("IMPOSSIBLE");
    }

    else{
        int char_freq[26] = {0};
        int iCnt = 0,jCnt = 0;

        for(iCnt = 0;iCnt<len;iCnt++){
            char_freq[str[iCnt]-'a']++;
        }

        int count = 0;

        for(iCnt = 0;iCnt<len;iCnt++){
            
            if(char_freq[str[iCnt]-'a'] > 1){
                for(jCnt = 0;jCnt<26;jCnt++){

                    if(char_freq[jCnt]==0){

                        char_freq[str[iCnt]-'a']--;

                        str[iCnt] = (char)(jCnt+'a');

                        char_freq[jCnt]++;

                        break;
                    }
                }
            }
        }
    }

    printf("\n %s",str);

}

int main(){

    char str[] = "xxxxyyyy";
    int len = strlen(str);
    printf("%d %s",len,str);
    minReplacement(str,len);
    return 0;
}