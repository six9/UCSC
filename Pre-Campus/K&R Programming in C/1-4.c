#include <stdio.h>

int main(){
    while(1){
        float fahr,cels;
        printf("Enter the Celsius temp: ");
        scanf("%f",&cels);
        fahr=(9/5)*cels+32;
        printf("\nFahrenheit Temp: %3.2f\n",fahr);
    }
}