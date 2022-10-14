#include <stdio.h>

int main(){
    char str[20];

    printf("Enter your name: \n");
    scanf("%s", str);

    printf("Your name is %s\n", str);

    char ch = getchar();
    int i = 0;

    printf("Enter your last name: \n");
    while(ch != '*'){
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';
    
    printf("Your last name is %s", str);


    return 0;
}