#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char onetoten[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(onetoten) / sizeof(onetoten[0]);
    for (int i = 0; i < length; i++) {
        printf("%d x %d = %d\n", n, onetoten[i], n * onetoten[i]);
    }
return 0;
}
