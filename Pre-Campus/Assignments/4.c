#include <stdio.h>
//prints the unique element of an array

int main(){
    int sizeOfArray;
    
    
    printf("Include the number of elements in the array: ");
    scanf("%d",&sizeOfArray);
    int theArray[sizeOfArray];
    printf("Enter the elements to be added: ");
    for (int i=0;i<sizeOfArray;i++){
        scanf("%d \t",&theArray[i]);
    }
    for (int i=0;i<sizeOfArray-1;i++){
        int count=0;
        for (int j=i+1;j<sizeOfArray;j++){
            if(theArray[i]==theArray[j]){
                count++;
            }
            
        }
        if(count==0){
            printf("Unique element is %d.",theArray[i]);
        }

    }
    return 0;
}
