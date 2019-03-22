#include <stdio.h>
#include <string.h>
/* finds repeated characters in a file*/ 
int main(){
    char theString[20];
    int len;
    int tempCount;
    int count=0;
    char theChar;

    
    while(1){
        
        printf("Enter the String: ");
        scanf("%s",theString);
        len=strlen(theString);
        for (int i=0;i<len;i++){
            tempCount=0;
            for (int j=i+1;j<len;j++){
                if(theString[i]==theString[j]){
                    tempCount++;
                }
                if(tempCount>count){
                    count=tempCount;
                    theChar=theString[i];
                }

            }
        }
        printf("Repeated character is %c which is repeated for %d times.",theChar,count+1);
    }
}
