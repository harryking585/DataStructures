#include <stdio.h>
#include <malloc.h>

struct node{
    int score;
    struct node* next;
};

struct node* start = NULL; //starting node in linked list
struct node* appendList(struct node* start);
struct node* printList(struct node* n);
void calcAVG();

int main(){
    appendList(start);
    printList(start);
    return 0;
}

struct node* appendList(struct node* start){
    struct node* new_node, *ptr;
    int exam_score;

    printf("\nEnter seven exam scores for your class: ");
    printf("\nEnter grade for Exam 1    :   ");
    scanf("%d", &exam_score);

    for(int i = 2; i < 8; i++){
        new_node = (struct node*)malloc(sizeof(struct node)); //allocate memory for new node
        new_node->score = exam_score;
        if(start == NULL){  //if this is the beginning of the list then assign new_node as the start
            new_node->next = NULL;
            start = new_node;
        }
        else{
            ptr = start;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf("\nEnter grade for Exam %d     :   ", i);
        scanf("%d", &exam_score);
    }

    return start;
}

struct node* printList(struct node* n){
    printf("Hi from printList()!");
    struct node *ptr;
    ptr = start;
    if(ptr != NULL){
        printf("\nThere's something here");
    }
    else{
        printf("\nWhere did the list go?");
    }
    for(int i = 0; i < 7; i++){
        printf(" %d", ptr->score);
        ptr = ptr->next;
    }
        
    

    return start;
}
