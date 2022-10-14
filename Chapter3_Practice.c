#include <stdio.h>

int main(){
    int MARKS[5][5] ={  {80,41,52,47,96},
                        {95,92,84,89,99},
                        {60,74,90,87,70},
                        {70,48,84,92,75},
                        {99,99,99,63,85}};
    /* Finding average marks per subject */
    //traverse array by column
    int sum = 0;
    int SUBJECT_MARKS[5];
    for(int x = 0; x < 5; x++){
        for(int r = 0; r < 5; r++){
            sum += MARKS[r][x];
        }
        SUBJECT_MARKS[x] = sum/5;
        sum = 0;
    }

    for(int i = 0; i < 5; i++){
        printf("Subject %d Avg = %d\n", i+1, SUBJECT_MARKS[i]);
    }
    
    printf("\n\n\n");
    
    /* Finding average marks per student */
    int STUDENT_MARKS[5];
    for(int i = 0; i <5; i++){
        for(int j = 0; j < 5; j++){
            sum += MARKS[i][j];
        }
        STUDENT_MARKS[i] = sum/5;
        sum = 0;
    }

    for(int i = 0; i < 5; i++){
        printf("Student %d Avg = %d\n", i+1, STUDENT_MARKS[i]);
    }

    printf("\n\n\n");

    /* Finding studnts who have scored below 50 in their average */
    return 0;
}