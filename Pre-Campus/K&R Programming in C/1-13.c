#include <stdio.h>

/*Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal*/



int histogram(int intArray[]);

int main(){
    int c,i,state;
    int digits[20];
    int word;
    word=0;
    for(i=0;i<20;i++){
        digits[i]=0;
    }

    while((c=getchar())!= EOF){
        if(c==' '||c=='\t'||c=='\n'){
            if(word>0){
                ++digits[word];
                word=0;
            }
        }else
        {
            ++word;
        }
        
    }
    for(i=0;i<20;i++){
        printf("%d",digits[i]);
    }
    printf("\n\n\n");
    histogram(digits);
    return 0;
}
int histogram(int intArray[]){
    int lines,x,y,i;
    lines=20;

    for(y=0;y<20;y++){
        for (x=0;x<20;x++){
            if((20-intArray[x])>y){
                printf(" 0 ");
            }else
            {
                printf(" - ");
            }
            
        }
        printf("\n");
    }
     for(i=0;i<20;i++){
        printf("%d ",i);
    }



    
}
