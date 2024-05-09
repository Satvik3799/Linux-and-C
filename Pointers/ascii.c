#include <stdio.h>

int main() {
    char input;

    printf("Enter a character: ");
    scanf("%c", &input); //Reads the single character entered by the user and stores it in the input variable

    printf("The ASCII value of '%c' is %d\n", input, (int)input); 

    return 0;
}
