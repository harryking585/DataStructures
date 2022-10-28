#include <stdio.h>
void strReverse(char str[], int length);// Function prototype

int main()
{
	// To hold string input
	char input[] = "Welcome";

	// Print the string.
	printf ("\n Original Word: %s\n", input);

	// Display it backwards.
	printf(" Backward Word: ");
	strReverse(input, 7);
	printf("\n\n");

	return 0;
}

void strReverse(char str[], int length){
    char temp;
    if(length == -1){   //Base case
        return;
    }
    else{               //Recursive case
        temp = str[length];
        printf("%c", temp);
        strReverse(str, length-1);
    }
}
