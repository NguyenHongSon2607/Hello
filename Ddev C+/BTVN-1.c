#include <stdio.h>

int main() {
    int max;
    printf("Enter the number fibonacci max: ");
    scanf("%d", &max);
    int a = 1, b = 1, c;
    printf("%d, ", a); 
    for (b = 1; b <= max;) {
        printf("%d, ", b);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}


