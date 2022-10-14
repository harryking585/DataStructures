#include <stdio.h>
#include <malloc.h>

struct node{
    int ticket;
    struct node* prev;
    struct node* next;
};
typedef struct node Node;

//creates a new node for the list
Node* createnode(int val);
//prints the list in chronological order
void printList(Node* head);
//prints the list starting from the end node
void printListBW(Node* head);

int main(){
    Node* head, *temp, *prev;
    int ticket;
    
    //The list is fixed to 7 nodes, I will not be writing a deletenode function
    printf("Enter your 7 tickets: \n");
    for(int i = 0; i < 7; i++){
        //take user input
        printf("Enter ticket number %d ->", i+1);
        scanf("%d", &ticket);
        //case that list has not been created yet
        if(head == NULL){                   
            head = createnode(ticket);          
            temp = head;
        }
        //node intitialization for every other node following the head node
        else{
            Node* newnode = createnode(ticket);
            temp->next = newnode;
            newnode->prev = temp;
            temp = temp->next;
            
        }
    }
    printList(head);
    printListBW(head);
    return 0;
}
Node* createnode(int val){
    Node* newnode = malloc(sizeof(newnode));
    newnode->ticket = val;
    newnode->next = NULL;
    newnode->prev = NULL;

    return newnode;
}

void printList(Node* head){
    Node* temp = head;
    printf("All of your lottery tickets will be listed below\n");
    while(temp != NULL){
        printf("    %d \n", temp->ticket);
        temp = temp->next;
    }
}
//prints list backwards, starting from the end node; Currently looping infinitely on the end node
void printListBW(Node* head){
    Node* temp = head;
    printf("All of your lottery tickets will be listed below(backwards)\n");
    while(temp->next != NULL){   //Cycle through LS to set temp = end node
        temp = temp->next;
    }
    while(temp->prev != NULL){  //start printing the list starting from end node
        printf("    %d \n", temp->ticket);
        temp = temp->prev;
    }
    printf("    %d \n", temp->ticket);
}