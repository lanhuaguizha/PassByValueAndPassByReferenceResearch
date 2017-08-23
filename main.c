#include <stdio.h>

// 值传递？其实没有所谓的值传递还是引用传递，只是对“内存地址”的直接赋值才会改变变量
void swap1(int *a, int *b) {
    int *p;
    p = a;
    a = b;
    b = p;
    printf("%x %x\n", a, b);
    printf("%d %d\n", *a, *b);
}

// 引用传递？其实没有所谓的值传递还是引用传递，只是对“内存地址”的直接赋值才会改变变量
void swap2(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("%x %x\n", a, b);
    printf("%d %d\n", *a, *b);
}

int main() {
    int a = 5, b = 9;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    swap1(p1, p2);
    swap2(p1, p2);
    printf("%d %d\n", a, b);
}