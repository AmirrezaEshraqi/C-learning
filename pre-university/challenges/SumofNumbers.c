#include <stdio.h>
int sum(int num[]) {
    int sum = 0;
    int length = sizeof(num) / sizeof(num[0]);
    for (int i=0; i< length; i++){
        sum += num[i];
    }
    return sum;
}
int main() {
    int n;
    int a;
    scanf("%d", &n);
    int mynumbers[n];
    int length = sizeof(mynumbers) / sizeof(mynumbers[0]);
    if (n>0){
        for (int i=0; i< length; i++){
            scanf("%d", &a);
            mynumbers[i] = a;
        }
    printf("Sum : %d", sum(mynumbers));    
    }
    return 0;
}
