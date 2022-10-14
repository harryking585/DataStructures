#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node{
    int grade;
    struct node* next;
};
typedef struct node node_LL;

node_LL* create_node(int val);
void print_LL(node_LL *start);
int average_LL(node_LL *start); //please refer to function initialization
node_LL* delete_node(node_LL *n);


void main(){
     node_LL *start;
     node_LL *temp;
    int temp_val, avg;
    printf("Enter seven exam scores for your class: \n");
    for(int i = 0; i < 7; i++){
        printf("    Enter grade for exam %d :   ", i+1);
        scanf("%d", &temp_val);
        if(start == NULL){
            start = create_node(temp_val);
            temp = start;
        }else{
        node_LL *newNode = create_node(temp_val);
        temp->next = newNode;
        temp = temp->next;
        }
    }

    print_LL(start); 
    //Main stops running after the function call below
    avg = average_LL(start); //!!!!!
    printf("\nAVG = %d", avg);
    
    
}

node_LL* create_node(int val){
     node_LL* res = malloc(sizeof(node_LL));
    res->grade = val;
    res->next = NULL;
    
    return res;
}
void print_LL(node_LL *start){
     node_LL* temp = start;
    printf("Here are all of the exam scores you have entered: \n");
    printf("    List of exam grades: ");
    while(temp != NULL){
        printf("  %d  ", temp->grade);
        temp = temp->next;
    }
}
//!!!!!!!!!! Function in question !!!!!!!!!!!
int average_LL(node_LL *start){
    
    int sum = 0;
    
    while(start != NULL){
        sum += start->grade;
        start = start->next;
    }
    
    return sum/7;
}
/*
void delete_node(node_LL* head, int position){
  int i = 0;
  node
  while(i < position - 1){
    
  }
  
}
*/
