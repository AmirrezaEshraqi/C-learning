#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    int a = (score >= 90) ? printf("%c",'A') : printf("\0");
    int b = (89 >= score && score >= 80) ? printf("%c",'B') : printf("\0");
    int c = (79 >= score && score >= 70) ? printf("%c", 'C') : printf("\0");
    int d = (69 >= score && score >= 61) ? printf("%c", 'D') : printf("\0");
    int f = (60 >= score) ? printf("%c", 'F') : printf("\0");
    return 0;
}
