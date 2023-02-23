#include<stdio.h>

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(void){
    int x = 5;
    int y = 6;
    int n = max(x, y);
    printf("%d", n);
    return 0;
}