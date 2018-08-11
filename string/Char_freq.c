#include<stdio.h>
#include<string.h>

void Char_Freq(char string[] , int Length) {

    int Small_Freq[26] = {0};
    int Capital_Freq[26] = {0};
    int count1 = 0,count2 =0,iCnt = 0;
    
    while(string[iCnt] != '\0') {
            
        if(string[iCnt] >= 'a' && string[iCnt] <= 'z') {

            count1 = string[iCnt] - 'a';
            Small_Freq[count1] += 1;
    
        }//end of if

        else if (string[iCnt] >= 'A' && string[iCnt] <= 'Z') {

            count2 = string[iCnt] - 'A';
            Capital_Freq[count2] += 1;
        }

        
        iCnt++;
    
    }//end of while

    //Print Output
    for(int i= 0 ;i<26;i++) {

        if(Small_Freq[i]>0){
        printf("\n%c::%d",i+97,Small_Freq[i]);
        }
        
        if(Capital_Freq[i]>0){
        printf("\n%c::%d",i+65,Capital_Freq[i]);
        }

        
    }


}


int main() {

    char string [] = "Arati Sushil BhiLE";
    int stringLen = strlen(string);

    printf("%s %d",string,stringLen);
 
    Char_Freq(string,stringLen);

    return 0;
}
