#include <stdio.h>
struct player{
    int pID;
    int points;
};
 
void getPlayerInfo(struct player* play);
void showInfo(struct player p);
int getTotalPoints(struct player arr[], int total);

int main(){
    struct player arr[4];


    for(int i = 0; i < 4; i++){
        printf("PLAYER #%d\n----------\n", i+1);
        getPlayerInfo(&arr[i]);
    }
    
    printf("NUMBER          POINTS SCORED\n");
    for(int i = 0; i < 4; i++){
        showInfo(arr[i]);
    }

    int total = getTotalPoints(arr, total);
    printf("TOTAL POINTS: %d", total);
    return 0;
}

void getPlayerInfo(struct player* play){
    printf("Player's six digit ID: \n");
    scanf("%d", &play->pID);
    printf("Points scored: \n");
    scanf("\n%d", &play->points);
}

void showInfo(struct player p){
    printf("%d             %d\n", p.pID, p.points);
}

int getTotalPoints(struct player arr[], int total){
    total = 0;
    for(int i = 0; i < 4; i++){
        total += arr[i].points;
    }

    return total;
}