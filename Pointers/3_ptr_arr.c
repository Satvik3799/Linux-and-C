#include <stdio.h>
int main() {

  int x[5] = {1, 2, 3, 4, 5};
  int *ptr;

  // ptr is assigned the address of the third element
  ptr = &x[2]; 

  printf("*ptr = %d \n", *ptr);   // 3 - because the value to be printed is pointed out by ptr. if it was just ptr instead of *ptr, it would've been address
  printf("ptr = %p \n", ptr);
  printf("*(ptr+1) = %d \n", *(ptr+1)); // 4
  printf("*(ptr-1) = %d \n", *(ptr-1));  // 2

  return 0;
}