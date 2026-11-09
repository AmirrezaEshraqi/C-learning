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
    strcpy(book[0].brand, "The Art of Explaination"); book[0].year = 2008;
    strcpy(book[1].brand, "No Starch"); book[0].year = 2026;
    int NewAmount = 3;
    struct Books *temp = realloc(book, NewAmount * sizeof(struct Books));
    if (temp == NULL) {
        free(book);
        printf("RAM wasn't enough for memory");
        return 1;
    }
    book = temp;
    strcpy(book[2].brand, "CS:APP"); book[2].year = 2016;
    for (int i=0; i < NewAmount; i++) {
        printf("%s - %d\n", book[i].brand, book[i].year);
    }
    return 0;
}
