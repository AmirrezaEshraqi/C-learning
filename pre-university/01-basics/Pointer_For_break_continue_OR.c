#include <stdio.h>
 
int main() {
  int myNumbers[20] = {25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500};
  int *ptr = &myNumbers[0];
  int i;
  int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
  for (i = 0; i < length; i++) {
    printf("This is the %d variable with value %d at address %p\n", i, *(ptr+i), (ptr+i));
        if ( i == 5 || i == 10 || i == 15) {
      continue;
    }
    if ( i == 19) {
      break;
    }
  }
  return 0;
}
