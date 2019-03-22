#include <stdio.h>
#include <string.h>
/*finds repeated characters in a string recursively*/

int len;
int count=0;

char theCharacter;
int tempCount=0;

char repeatedChars(char text[],int max,int min){
   
   if (max!=0){
      if (min==max) {
         if (tempCount>count) {
            count=tempCount;
            theCharacter=text[max];
            
         }
         max--;
         min=0;
         tempCount=0;
         repeatedChars(text,max,min);       
      }else{
         if(text[min]==text[max]){
            tempCount++;
         }
         min++;
         repeatedChars(text,max,min);
      }
      
      
   }
   return theCharacter;   
}


int main(){
    char theString[30];
    
    printf("Input String: ");
    scanf("%s",&theString);
    len=strlen(theString);
    printf("\nThe repeated Character is: %c.",repeatedChars(theString,len-1,0));
    return 0;

}
  
   
