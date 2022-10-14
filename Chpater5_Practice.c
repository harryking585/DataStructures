#include <stdio.h>
typedef struct DOB{
    int month;
    int day;
    int year;
};

typedef struct student{
    int id_number;
    char name[50];
    struct DOB date;
};

void print_student();
int main(){

    return 0;
}