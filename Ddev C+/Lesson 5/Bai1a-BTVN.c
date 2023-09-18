#include <stdio.h>

int main() {
    int N;
    printf("\nNhap do cao tam giac = ");
    scanf("%d", & N);

    int i, j;
    int space = N - 1;
    for (i = 0; i < N; i++) {
      //tao do cao
      for (j = 0; j < space - i; j++) {
        printf(" ");
      }
      for (j = 0; j < i; j++) {
        printf("*");
      }
      printf("\n");
    }
}

