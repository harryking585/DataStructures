// incomplete functions

#include <stdio.h>
#include <string.h>
#define MAX 25
struct patient{
    int priority;
    char name[MAX];
};
typedef patient patient;

struct queue{
    patient pats[MAX];
    patient top_priority;
};
typedef queue queue;

void display(queue q);      //displays the priority queue
void insert(queue* q);      //inserts an element into the priority queue
void search(queue* q);      //searches the priority queue to change priority 

int main(){
    queue patients;
    int choice;

    while(1){
        printf("Enter 1 to add a new patient");
        printf(", 2 to change the priority");
        printf(", 3 to display the queue, Any other key to quit: \n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                //add new patient
                break;
            case 2:
                //change priority
                break;
            case 3:
                //display queue
                break;
            default:
                return 0;
        }
    }
    
    return 0;
}

