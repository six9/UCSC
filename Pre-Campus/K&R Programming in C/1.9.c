#include <stdio.h>
/*Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.*/
int main(void)
{   
    int c,lastc;
    lastc='-';
    while ((c = getchar()) != EOF){
        if (c==' '){
            if(lastc!=' '){
                putchar(c);
            }
            lastc=c; 
        }
        else{
            putchar(c);
            lastc=c; 
        }
          
    }
    return 0;
}


