#include <stdio.h>

int main() {
  // order matters, return still ends the fxn

  printf("Good News Everyone! \n");

  printf("What is this placeholder thing? %lf \n", 5.3234);

  printf("%d random number here %f yup \n", 10, 6.5);

  printf("how ordering works: %d %d %d %d \n", 10,2,3,52);

  printf("mixed types: %d %lf \n", 10, 1.7);
  // they need to be corresponding

  printf("testing out of bounds: %c \n", 'abc');
  // it only takes the last char

  printf("testing short bounds: %d \n",2147483650);
  //largest int is 2147483647, smallest -2147483647
  // it wraps around, this code shows -2147483646

  // printf("i break the code %s", 10);
  // when a certain part of code is incorrect,
  // it will compile but stops here

  printf("im also running, the broken code was commented out yup \n");

  return 0;

  //vscode is giving me where the error is :> i appreciate it ty
  // the terminal does not tell me where code is wrong

  // when a certain part of code is incorrect, it will not compile and will run the old one
}