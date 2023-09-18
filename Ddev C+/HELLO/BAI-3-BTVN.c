#include <stdio.h>

int main() {
    int num;
    
    // Nhap so nguyên tu bàn phím
    printf("Enter the num: ");
    scanf("%d", &num);
    printf("Multiplication table of %d:\n", num);
    
    // su dung vong lap FOR in ra bang cuu chuong
    int i;
    for ( i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n",i, num, i, num * i);
    }
    return 0;
}

