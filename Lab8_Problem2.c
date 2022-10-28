#include <stdio.h>
#include <conio.h>
#define MAX 7
struct queue{
    char arr[5];
    int front;
};
typedef struct queue Queue;

Queue* readFile(FILE* f);
void identityCheck(Queue* q1, Queue* q2);

int main(){
    FILE* f1 = fopen("file1.txt", "r");
    FILE* f2 = fopen("file2.txt", "r");

    Queue* q1 = readFile(f1);
    Queue* q2 = readFile(f2);

    identityCheck(q1, q2);
    return 0; 
}

Queue* readFile(FILE* f){
    Queue* q;
    int c; 
    int i = 0;
    while((c = fgetc(f)) != EOF){
        q->arr[i] = fscanf(f,"%c\n");
        i++;
    }
    q->front = i;
    return q;
}

void identityCheck(Queue* q1, Queue* q2){
    int f_iden = 0; //files are equivalent:     0
                    //files are not equivalent: 1
    printf("File content comparison:\n");
    printf("File 1   File 2   Result\n");

    for(int i = q1->front; i >= 0; i--){
        printf("%c   %c   ", q1->arr[i], q2->arr[i]);
        if((q1->arr[i]) == (q2->arr[i])){
            printf("=\n");
        }
        else{
            printf("!=\n");
            f_iden = 1;
        }
    }

    if(f_iden == 1){
        printf("The files are not identical.\n");
    }
    else if(f_iden == 0){
        printf("The files are identical.\n");
    }
}