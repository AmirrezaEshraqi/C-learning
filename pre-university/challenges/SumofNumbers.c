#include <stdio.h>
int sum (int num) {
    if (num > 0) {
        return num + sum(num - 1);
    } else {
        return 1;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int inputnumbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &inputnumbers[i]);
        printf("Sum : %d\n", sum(i));
    }
    return 0;
}
