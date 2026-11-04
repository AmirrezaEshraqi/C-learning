#include <stdio.h>
void printNumbers(int numbers[]) {
    for (int i=0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }
}
int main() {
    int myNumbers[] = {10,20,30,40,50};
    printNumbers(myNumbers);
    return 0;
}
