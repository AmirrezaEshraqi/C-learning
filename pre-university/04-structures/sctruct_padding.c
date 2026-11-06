#include <stdio.h>
struct PaddingExample {
    char a;      // 1 byte
    int b;       // 4 bytes
    char c;      // 1 byte
    long d;     // 8 bytes
};
struct __attribute__((__packed__)) FixedPadding {
    char a;      // 1 byte
    int b;       // 4 bytes
    char c;      // 1 byte
    long d;     // 8 bytes
};
int main() {
    struct PaddingExample example;
    printf("Size of struct PaddingExample: %zu bytes\n", sizeof(example));
    printf("Address of struct PaddingExample: %p\n", (void*)&example);
    printf("Address of member 'a': %p\n", (void*)&example.a);
    printf("Address of member 'b': %p\n", (void*)&example.b);
    printf("Address of member 'c': %p\n", (void*)&example.c);
    printf("Address of member 'd': %p\n", (void*)&example.d);
    struct FixedPadding fixed;
    printf("Size of struct FixedPadding: %zu bytes\n", sizeof(fixed));
    printf("Address of struct FixedPadding: %p\n", (void*)&fixed);
    printf("Address of member 'a': %p\n", (void*)&fixed.a);
    printf("Address of member 'b': %p\n", (void*)&fixed.b);
    printf("Address of member 'c': %p\n", (void*)&fixed.c);
    printf("Address of member 'd': %p\n", (void*)&fixed.d);
    printf("Saved memory addresses of struct PaddingExample members: %zu bytes\n", sizeof(example) - sizeof(fixed));
    return 0;
}
