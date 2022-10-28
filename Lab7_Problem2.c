#include <stdio.h>

int power(int num, int exp);

int main(){
    int base, exp, result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    result = power(base, exp);
    printf("Result: %d", result);
    return 0;
}

int power(int num, int exp){
    if(exp == 0){                       //base case
        return 1;
    }
    else{
        return (num*power(num, exp-1)); //recursive case
    }

}