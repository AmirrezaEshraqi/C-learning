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
    int a;
    scanf("%d", &n);
    char mynumbers[n];
    int length = sizeof(mynumbers) / sizeof(mynumbers[0]);
    if (n>0){
        for (int i=0; i< length; i++){
            scanf("%d", &a);
            mynumbers[i] = a;
            
        }
    }
    return 0;
}
