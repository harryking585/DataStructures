#include <stdio.h>

int main(){
    char firststring[50] = "Appending a string";
    char secondstring[25] = " to the end";
    int i = 0, j = 0;
    //append secondstring to firststring
    while(firststring[i] != '\0'){
        i++;
    }
    while(secondstring[j] != '\0'){
        firststring[i] = secondstring[j];
        i++;
        j++;
    }
    firststring[i] = '\0';

    //reverse firststring
    int top = i-1;
    for(int i = 0; i < top; i++){
        char temp = firststring[top];
        char temp2 = firststring[i];
        firststring[i] = temp;
        firststring[top] = temp2;
        top--;
    }

    printf("After reversing and appending both strings: %s", firststring);
    return 0;
}
