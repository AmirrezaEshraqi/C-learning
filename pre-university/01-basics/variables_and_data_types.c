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
/* Testing this new command method */
short int ShortInt = -3;
unsigned int FirstOutsidePositive = +64646;
long int FirstLongint = 135813;
long long int TestingTheCapicity = 99e10;
long long int testingthecapicity = 99e10;
/* There is a difference between the lower case and upper case varriables' names */
unsigned long int PositiveLongInt = 66e6;
unsigned long long int Maximum = 18e18;
long double TestLongDouble = 56.6454L;
printf("%hd \n %u \n %li \n %lli \n %lli \n %lu \n %llu \n %.6lf \n", ShortInt, FirstOutsidePositive, FirstLongint, TestingTheCapicity, testingthecapicity, PositiveLongInt, Maximum, TestLongDouble);
printf("Total bytes : %zu\n", (sizeof(x) + sizeof(y) + sizeof(z) + sizeof(myNum) + sizeof(FirstLetter) + sizeof(a) + sizeof(b) + sizeof(c) + sizeof(myDouble) + sizeof(myFloat) + sizeof(myDoubleNum) + sizeof(_ITEMNUMBERS) + sizeof(Currency_Symbol) + sizeof(eachitemprice) + sizeof(ShortInt) + sizeof(FirstOutsidePositive) + sizeof(FirstLongint) + sizeof(TestingTheCapicity) + sizeof(testingthecapicity) + sizeof(PositiveLongInt) + sizeof(Maximum) + sizeof(TestLongDouble)) );
}
