#include <stdio.h>

void change_string(char *ptr[7]);
int main(){
    char str[] = "Yellow";

    change_string(&str);

    printf("The color of the sky is %s", str);
    return 0;
}

void change_string(char *ptr[7]){
    *ptr[0] = 'b';
}