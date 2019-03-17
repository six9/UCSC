#include <stdio.h>
#include <string.h>
int count=0;
int removeDup(int array[],int array2[]){
    int c;
    for (c=0;c<10-count;c++){
        if(array[c]==1){
            int p;
            p=c;
            for (;p<10;p++){
                array2[p]=array2[p+1];
            }
        }
        
    }
    return array2;
}
int main(){
    int x;
    x=10;
    int A[x];
    while(x==10){
        int i;
        for (i=0;i<x;i++){
            printf("Enter the numbers:");
            scanf("%d \n",&A[i]);
        }
        printf("The Array is:");
        for (i=0;i<x;i++){
            printf("%d ",A[i]);
        }
        int copies[20];
        memset(copies,0,sizeof(copies));
        

        
        for (i=0;i<x;i++){
            int current;
            current = A[i];
            if (current==A[i+1]){
                copies[i]=1;
                count++;
                
            }

        }
        printf("\nThe Array is:");
        for (i=0;i<x;i++){
            printf("%d ",copies[i]);
        }
        printf("\n");
        removeDup(copies,A);
        
        printf("\nThe Cleaned Array is:");
        for (i=0;i<x-count;i++){
            printf("%d ",A[i]);
        }
    }
}  
