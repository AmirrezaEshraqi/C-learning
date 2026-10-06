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
printf("Converting each character with ASCII to real :%c%c%c\n", a, b, c);
double myDouble = 3e3;
printf("Double with E test : %f\n", myDouble); 
float myFloat = 3.141254;
printf("Just used pi number for testing : %.2f\n", myFloat);
double myDoubleNum = 19.99;
printf("%.0lf\n", myDoubleNum);
printf("Each byte size : %zu %zu %zu %zu %zu %zu %zu %zu %zu %zu %zu\n", sizeof(x), sizeof(y), sizeof(z), sizeof(myNum), sizeof(FirstLetter), sizeof(a), sizeof(b), sizeof(c), sizeof(myDouble), sizeof(myFloat), sizeof(myDoubleNum));
// testing some real world examples
int _ITEMNUMBERS = 120;
char Currency_Symbol = '$';
float eachitemprice = 119e1;
printf("Total Price: %c%.5f\n", Currency_Symbol, eachitemprice * _ITEMNUMBERS);
}
