#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a sentence to flip all alphabetical characters: \n");
    gets(str);

    int i = 0;
    int ascii;
    while(str[i] != '\0'){
        ascii = (int)str[i];
        //upper to lower
        if(ascii > 64 && ascii < 90){
            ascii = ascii + 32;
            str[i] = ascii;
        }
        //lower to upper
        else if(ascii > 96 && ascii < 123){
            ascii = ascii - 32;
            str[i] = ascii;
        }

        i++;
    }

    printf("Result after the conversion:\n%s", str);
    return 0;
}