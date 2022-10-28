#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define MAX 9

typedef struct{
	int size;
    int top;
    int arr[MAX];   //array of tickets
}Stack;

void push(Stack* stack, int ticket);
void display(Stack * stack);
int pop(Stack* stack);
void checkWin(Stack* stack, int ticket);
void changeCenter(Stack* stack);

int main(){
	Stack* s;
	int c = 0;
	int ticket;
	do{
		printf("Which function would you like to run\n");
		printf("1. Push Winning Tickets\n");
		printf("2. Pop\n");
		printf("3. Enter your ticket number\n");
		printf("4. Display\n");
		printf("5. Change middle number\n");
		printf(":: -1 to exit program ::\n");
		

		printf("Enter your choice below,");
		scanf("%d", &c);

		switch(c){
			case 1:
				ticket = 0;
				printf("What value would you like to push?\n");
				scanf("%d", &ticket);
				push(s, ticket);

				break;
			case 2:
				ticket = pop(s);
				printf("%d popped from stack\n\n\n", ticket);
				break;
			case 3:
			    ticket = 0;
			    printf("Enter your lottery ticket number: \n");
			    scanf("%d", &ticket);
			    checkWin(s, ticket);
			    break;
			case 4:
				display(s);
				break;
			case 5:
			    changeCenter(s);
			    display(s);
			    break;
		};
	
	}
	while(c != -1);


	return 0;
}

void push(Stack* stack, int ticket){
	printf("Pushing value into the stack\n\n\n");
	stack->top = stack->size;
	stack->size++;
	stack->arr[stack->top] = ticket;
}

void display(Stack* stack){
	for(int i = stack->top; i > 0; i--){
	    printf("  | %d |  \n", stack->arr[i]);
	}
	printf("\n\n\n");
}

int pop(Stack* stack){
    int ticket;
    ticket = stack->arr[stack->top];
    stack->top--;
    stack->size--;
    
    return ticket;
}

void checkWin(Stack* stack, int ticket){
    for(int i = stack->top; i > 0; i--){
        if(stack->arr[i] == ticket){
            printf("Congratulations, you won!\n\n\n");
            return;
        }
    }
    printf("Sorry, you need to buy more tickets!\n\n\n");
}

void changeCenter(Stack* stack){
    for(int i = stack->top; i > 0; i--){
        if(i == 3){
            stack->arr[i] = 7653469;
        }
    }
}

