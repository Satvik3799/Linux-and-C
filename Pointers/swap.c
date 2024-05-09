#include<stdio.h>

int main()
{
    int first, second, temp;

    printf("First number:");
    scanf("%d \n", &first);
    printf("Second number:");
    scanf("%d \n", &second);

    temp=first;

    first = second;

    second = temp;

    printf("\nAfter swapping, first number = %d\n", first);
    printf("After swapping, second number = %d", second);
    return 0;
}