#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;
    int **pp = &p;
    **pp = 10;
    printf("a=%d\n", a);
}