#include<stdio.h>
int main()
{
    int var = 5, *ptr, ptr_var;
    printf("var: %d \n", var);
    printf("address of var: %p \n", &var); //Address of var

    ptr = &var;
    printf("value of ptr: %p \n", ptr); 
    printf("address of ptr: %p \n", &ptr); 

    ptr_var = *ptr;
    printf("value of ptr_var: %d \n", ptr_var); 
    printf("address of ptr_var: %p \n", &ptr_var); 
    return 0;
}