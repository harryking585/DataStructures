#include <stdio.h>
#define MONKEYS 3
#define DAYS 5

int main(){
    float food[MONKEYS][DAYS];
    float total = 0;
    //slot [0] represents the monkey # [1] represents the day [2] represents the amount of food
    float greatest_monkey[] = {0, 0, 0};

    for(int i = 0; i < MONKEYS; i++){
        for(int j = 0; j < DAYS; j++){
            printf("Pounds eaten by MONKEY #%d on day %d: ", i+1, j+1);
            scanf("%f", &food[i][j]);
            total += food[i][j];
            if(food[i][j] > greatest_monkey[2]){
                greatest_monkey[0] = i + 1;
                greatest_monkey[1] = j + 1;
                greatest_monkey[2] = food[i][j];
            }
        }
        printf("Total food consumed by MONKEY #%d is %.0f pounds.\n\n", i+1, total);
        total = 0;
    }

    printf("Monkey #%.0f ate the most food: %.0f pounds, on day %.0f", greatest_monkey[0], greatest_monkey[2], greatest_monkey[1]);

    return 0;
}
