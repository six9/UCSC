#include <stdio.h>
/* to check the difference in for/while loops in --p/p++ */

int main(){
    int i,p=10;
    printf("For loop (p--):\n");
    for(i=0;p>0;i++){
        printf("p: %d\ti: %d\n",p,i);
        p--;
    }
    printf("finally p: %d\ti: %d\n",p,i);
    printf("While loop(p--):\n");
    printf("\n");

    p=10;
    while(p>0){
        printf("p: %d\n",p);
        p--;
    }
    printf("finally p: %d\n",p);
    printf("\n");

    p=10;
    printf("For loop (--p):\n");
    for(i=0;p>0;i++){
        printf("p: %d\ti: %d\n",p,i);
        --p;
    }
    printf("finally p: %d\ti: %d\n",p,i);
    printf("\n");

    printf("While loop(--p):\n");
    p=10;
    while(p>0){
        printf("p: %d\n",p);
        --p;
    }
    printf("finally p: %d\n",p);
    printf("\n");

    return 0;
}
