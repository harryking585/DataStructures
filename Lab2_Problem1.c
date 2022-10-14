#include <stdio.h>

int exam_analizer(int scores[], int* largest_ptr, int* smallest_ptr, float* average_ptr);

int main()//Except for the function call in the middle of this function,  
{		//do not change this main() function. 	

	int exam[] = { 70, 80, 90, 85, 30, 40, 95, 60, 85, 78 };
	int largest = exam[0]; //Or you can make this equal 0
	int smallest = exam[0]; //Or you can make this equal 100
	float total = 0;

	//Hint: you should pass in four arguments
	exam_analizer(exam, &largest, &smallest, &total);
	//Refresh your mind on the pass-by-reference concept & its benefits.
    
	printf("\n\nHighest exam score is: %d", largest);
	printf("\nLowest exam score is: %d", smallest);
	printf("\nClass average is: %.2f\n", total / 10.0);
    
	return 0;
}
int exam_analizer(int scores[], int* largest_ptr, int* smallest_ptr, float* average_ptr){
    //listing of exam scores
    printf("List of exam grades:");
    for(int i = 0; i < 10; i++){
        printf(" %d ", scores[i]);
    }
    //find the largest exam score
    int temp = 0;
    for(int i = 0; i < 10; i++){
        if(i == 0){
            temp = scores[i];
        }
        else{
            if(temp < scores[i]){
                temp = scores[i];
            }
        }
    }
    *largest_ptr = temp;

    //find the smallest exam score
    temp = 100;
    for(int i = 0; i < 10; i++){
        if(temp > scores[i]){
            temp = scores[i];
        }
    }
    *smallest_ptr = temp;

    //find the average exam score
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += scores[i];
    }
    *average_ptr = sum;
}
