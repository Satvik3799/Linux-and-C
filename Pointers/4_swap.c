#include <stdio.h>

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int num1 = 5, num2 = 10;
    printf("Before Swapping!\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    // address of num1 and num2 is passed
    swap( &num1, &num2);

    printf("After Swapping!\n");

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    return 0;
}