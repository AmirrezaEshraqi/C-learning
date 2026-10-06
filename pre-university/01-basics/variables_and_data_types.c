#include <stdio.h>
int main() {
int myNum = 15;
myNum = 10;
printf("%i\n", myNum);
int x, y, z;
x = y = z = 50;
printf("%d\n", x + y + z);
char FirstLetter = 'A';
printf("%c\n", FirstLetter);
char a = 65, b = 66, c = 67;
printf("%c%c%c", a, b, c);
double myDouble = 3e3;
printf("\n%f\n", myDouble); 
float myFloat = 3.141254;
printf("%.2f\n", myFloat);
double myDoubleNum = 19.99;
printf("%.0lf\n", myDoubleNum);
printf("%zu %zu %zu %zu %zu %zu %zu %zu %zu %zu %zu\n", sizeof(x), sizeof(y), sizeof(z), sizeof(myNum), sizeof(FirstLetter), sizeof(a), sizeof(b), sizeof(c), sizeof(myDouble), sizeof(myFloat), sizeof(myDoubleNum));
}
