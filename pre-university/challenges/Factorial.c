#include <stdio.h>

long factorial(int n) {
    if (n>0) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
    }


int main() {
    int num;
    scanf("%d", &num);
    printf("%d! = %ld\n", num, factorial(num));
    return 0;
}
