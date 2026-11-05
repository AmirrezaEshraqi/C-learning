#include <stdio.h>

int main() {
    char name[100];
    int age;
    scanf("%s", name);
    scanf("%d", &age);
    if (age>=18) {
        printf("%s can vote", name);
    } else {
        printf("%s cannot vote", name);
    }
    return 0;
}
