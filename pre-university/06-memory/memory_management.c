#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Books {
    int year;
    char brand[50];
};
int main() {
    struct Books *book = calloc(2, sizeof(struct Books));
    if (book == NULL){
        printf("RAM wasn't enough for memory");
        return 1;
    }
    strcpy(book[0].brand, "Oxford"); book[0].year = 2018;
    strcpy(book[1].brand, "Scratch"); book[0].year = 2025;
    int NewAmount = 3;
    struct Books *temp = realloc(book, NewAmount * sizeof(struct Books));
    if (temp == NULL) {
        free(book);
        printf("RAM wasn't enough for memory");
        return 1;
    }
}
