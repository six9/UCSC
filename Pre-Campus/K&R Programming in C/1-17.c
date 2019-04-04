#include <stdio.h>
//prints line less than 80 characters.

int main()
{
    int c,i;
    char text[100];
    for(i=0;(c=getchar())!= EOF ;++i){
        text[i]=c;
        if(c=='\n'){
            break;
        }
        
    }
    
    if(i<=80){
        printf("\nPrinting:...");
        printf("%s",text);
    }
    printf("\nThat's more than 80 characters!.");

    return 0;
}
