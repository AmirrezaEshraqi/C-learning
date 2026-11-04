#include <stdio.h>
 
int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  int *ptr = &myNumbers[0];
  int i;

  for (i = 0; i < 4; i++) {
    printf("%p\n",(ptr+i));
  }
  return 0;
}
