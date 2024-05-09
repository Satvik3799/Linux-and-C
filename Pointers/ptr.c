#include <stdio.h>

int main() {
  // Declare an integer variable
  int number = 42;

  // Declare a pointer to an integer (int *)
  int *ptr;

  // Use the ampersand (&) to get the address of the number variable
  ptr = &number;

  // Print the value stored in the variable
  printf("Value of number: %d\n", number);

  // Print the address stored in the pointer (memory location of number)
  printf("Address of number (stored in ptr): %p\n", ptr);

  // Use the dereference operator (*) to access the value through the pointer
  *ptr = 100;

  // Print the value of number again (it has changed)
  printf("Value of number after modification through pointer: %d\n", number);

  return 0;
}

