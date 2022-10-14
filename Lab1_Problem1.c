#include <stdio.h>

int main(){
    float temp_c;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp_c);
    if(temp_c < 0){
        return 0;
    }
    else{
        temp_c = ((9*temp_c)/5) + 32;

        printf("%.1f degrees Fahrenheit.", temp_c);
    }
    

    return 0;
}