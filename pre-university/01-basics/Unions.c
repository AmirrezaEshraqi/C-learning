#include <stdio.h>

union Data {
    int num;
    char letter;
};

int main(void) {
    union Data u1;

    u1.num = 1000;
    printf("Number: %d\n", u1.num);

    u1.letter = 'A';
    printf("Letter: %c\n", u1.letter);
    // I use this loop to observe whether reading the inactive
    // union member (num) produces a different value after
    // writing to another member (letter).
    // This experiment helps me understand how union members
    // share the same memory.
    for (int i=0; i < 5;i++) {
        printf("%d\n", u1.num);
    }
    return 0;
}
