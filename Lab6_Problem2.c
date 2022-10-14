#include <stdio.h>
#include <malloc.h>
#define MAX 5   //maximum number of values the stack can hold

float stack[MAX];
int top = -1;

void push(float val, float stack[]);
float pop(float stack[]);
void display(float stack[]);

int main(){
    printf("Pushing 5 values to the stack: \n");
    push(10, stack);
    push(12, stack);
    push(15, stack);
    push(20, stack);
    push(25, stack);

    display(stack);

    printf("Adding top two numbers and pushing the sum onto the stack: \n");
    float sum = 0;
    sum = pop(stack);
    sum += pop(stack);
    push(sum, stack);

    display(stack);

    printf("Pops the first two values off the stack and divide. Then push it back onto the stack: \n");
    float val = pop(stack);
    val /= pop(stack);
    push(val, stack);

    display(stack);

    printf("Popping values from the stack: \n");
    printf("%.0f\n", pop(stack));
    printf("%.0f\n", pop(stack));
    printf("%.0f\n", pop(stack));

    printf("Attempting to pop a value that isn't there: \n");
    pop(stack);
    return 0;
}

void push(float val, float stack[]){
    if(top == MAX){
        printf("!:STACK OVERFLOW");
    }
    else{
        printf("Pushing %.0f\n", val);
        top++;
        stack[top] = val;
    }
}

float pop(float stack[]){
    float val;

    if(top == -1){
        printf("!:STACK UNDERFLOW");
    }
    else{
        val = stack[top];
        top--;
        return val;
    }
}

void display(float stack[]){
    int temp = top;
    if(top == -1){
        printf("!:EMPTY STACK");
    }
    else{
        printf("Displaying the Stack: \n");
        while(temp != -1){
            printf("  |%.0f|\n", stack[temp]);
            temp--;
        }
    }
}

