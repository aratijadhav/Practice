#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char *removeDuplicate(char str[], int n) 
{ 
   // Used as index in the modified string 
   int index = 0;    
     
   // Traverse through all characters 
   for (int i=0; i<n; i++) { 
         
     // Check if str[i] is present before it   
     int j;   
     for (j=0; j<i; j++)  
        if (str[i] == str[j]) 
           break; 
       
     // If not present, then add it to 
     // result. 
     if (j == i) 
        str[index++] = str[i]; 
        printf("\nindex = %d  i = %d j = %d\n",index,i,j);
   } 
     
   return str; 
} 
  
// Driver code 
int main() 
{ 
   char str[]= "arati"; 
   int n = sizeof(str) / sizeof(str[0]); 
   printf("%s",removeDuplicate(str, n)); 
   return 0; 
} 