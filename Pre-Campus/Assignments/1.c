#include <stdio.h>
#include <string.h>

//print vowel count in a given word.
int a,e,i,o,u;

char sortChar(char txt[20],int p){
    if (p==-1){
             return;   
    }else
    {        
        switch (txt[p])
        {
            case 'a':
                a++;
                break;                
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
            
        }
        p--;

    }
    sortChar(txt,p);

}
int main(){
    a=e=i=o=u=0;
    printf("input the string: ");
    char theWord[20];
    scanf("%s",&theWord);
    int len;
    len=strlen(theWord);
    sortChar(theWord,len);
    printf("A: %d\nE: %d\nI: %d\nO: %d\nU: %d\n",a,e,i,o,u);
}




/*
int main(){
    int a,e,i,o,u;
    a=e=i=o=u=0;
    printf("\nPlease input a word:\t");
    char word[20];
    scanf("%s",&word);
    printf("%s",word);
    int j;
    int l;
    l=strlen(word);
    for (j=0;j<l;j++){
        printf("\n %c  \t",word[j]);
        switch (word[j])
        {
            case 'a':
                a++;
                case 'e':
                e++;
                case 'i':
                i++;
                case 'o':
                o++;
                case 'u':
                u++;
               
            default:
            }
        a,e,i,o,u;
    }
    printf("\nA:\t %d\n E:\t %d\n I:\t %d\n O:\t %d\n U:\t %d\n",a,e,i,o,u);
    

    0;
} 
trying with recursive */

