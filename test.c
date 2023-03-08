#include<stdio.h>
int main(void){
    int a = 5;
    int *b = &a;
    *b = 10;
    
    printf("%d\n", a);
    printf("%p\n", b); //未設定*b的記憶體地址
    printf("%p", a);
}