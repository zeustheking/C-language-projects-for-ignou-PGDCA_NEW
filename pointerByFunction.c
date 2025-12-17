#include <stdio.h>

int main() {
    int a = 3;
    int b = 5;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping:\n");
    printf("a = %p\n", ptr1);
    printf("b = %p\n", ptr2);

    return 0;
}
