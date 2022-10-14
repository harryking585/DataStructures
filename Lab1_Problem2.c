#include <stdio.h>

void getScore(float* average, float* highest);

int main(){ // Do not change this main function
    float average, highest =  0;

    printf("Etner values for your four exam scores:\n");
    getScore(&average, &highest);

    printf("\nHighest score you made is : %.2f\n", highest);
    printf("Your exam average is: %.2f\n", average);

    return 0;
}

void getScore(float* average, float* highest){
    float e1, e2, e3, e4;


    printf("\nEnter score for exam 1: ");
    scanf("%f", &e1);
    printf("\nEnter score for exam 2: ");
    scanf("%f", &e2);
    printf("\nEnter score for exam 3: ");
    scanf("%f", &e3);
    printf("\nEnter score for exam 4: ");
    scanf("%f", &e4);

    *average = (e1 + e2 + e3 + e4)/4;

    if(e1 > e2 && e1 > e3){
        if(e1 > e4){
            *highest = e1;
        }
    }
    if(e2 > e1 && e2 > e3){
        if(e2 > e4){
            *highest = e2;
        }
    }
    if(e3 > e1 && e3 > e2){
        if(e3 > e4){
            *highest = e3;
        }
    }
    if(e4 > e1 && e4 > e2){
        if(e4 > e3){
            *highest = e4;
        }
    }
}