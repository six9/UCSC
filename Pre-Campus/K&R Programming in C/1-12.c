#include <stdio.h>
/*Write a program that prints its input one word per line*/
int main(){
    int c;
    while((c=getchar())!= EOF){
        if(c ==' ' || c=='\t'){
            break;
        }else
        {
            putchar(c);
        }
        
    }
}
