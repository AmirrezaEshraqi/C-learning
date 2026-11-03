#include <stdio.h>

// With typedef:
typedef struct {
  char brand[30];
  int year;
  char model[30];
  int amounts;
} Car;
int main() {
  /* Using without any structs */
  Car car1 = {"BMW", 1999, "Clownshoe", 26};
  Car car2 = {"Ford", 1969, "Bronco", 21}; 
  printf("%s %d\n", car1.brand, car1.year);
  printf("%s %d\n", car2.brand, car2.year);
  return 0;
}
