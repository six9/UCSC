#include <stdio.h>
//multiplies given two arrays and appends them in a third.
int main(){
    int sizeOfArray;
    int i;
    printf("Size of the first Array:");
    scanf("%d",&sizeOfArray);
    int firstArray[sizeOfArray];
    for (i=0;i<sizeOfArray;i++){
        printf("\nEnter the elements for the first array:");
        scanf("%d",&firstArray[i]);
    }
   
    int secondArray[sizeOfArray];
    for (i=0;i<sizeOfArray;i++){
        printf("\nEnter the elements for the second array:");
        scanf("%d",&secondArray[i]);
    }

   int thirdArray[sizeOfArray];
    for (i=0;i<sizeOfArray;i++){
        thirdArray[i]=firstArray[i]*secondArray[i];
        printf("%d \t",thirdArray[i]);
    }   
    return 0;  

}
