#include <stdio.h>

int main(){
    int m=20;
    int n=25;
    int AND_opr,OR_opr,XOR_opr,NOT_opr;
    printf("%d",m);
    printf("\n%d",~m);
    printf("\n%d",n);
    printf("\n%d",~n);
    AND_opr = (m&n);
    OR_opr = (m|n);
    NOT_opr = (~m);
    XOR_opr = (m^n);
    printf("AND_opr value = %d\n",AND_opr );
    printf("OR_opr value = %d\n",OR_opr );
    printf("NOT_opr value = %d\n",NOT_opr );
    printf("XOR_opr value = %d\n",XOR_opr );
    printf("left_shift value = %d\n", m << 1);
    printf("right_shift value = %d\n", m >> 1);
    printf("test 1:0s : %d\n",1<<3);
    printf("test 1:0s : %d\n",~(~0<<3));
    printf("test 1:0s : %d\n",~(~0<<3));

}
