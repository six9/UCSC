#include <stdio.h>
/* count lines in input */
main(){
    int c, nl,bl,tb;
    nl = tb = bl= 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c=='\t')
            ++tb;
        else if (c==' ')
            ++bl;  

    printf("\n%d \t %d \t %d \n", nl,tb,bl);
}