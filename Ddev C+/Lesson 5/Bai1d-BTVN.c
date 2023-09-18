//#include <stdio.h>
//
//int main() {
//  int n;
//  printf("\nNhap do cao tam giac: ");
//  scanf("%d", & n);
//  int i, j;
//  for (i = 1; i <= n; i++) {
//    for (j = 1; j <= n; j++) {
//      (i == n || j == 1 || i == j) ?
//      printf("* "): printf("  ");
//    }
//    printf("\n");
//  }
//}



#include <stdio.h>

int main() {
    int total_amount = 200000;
    int denominations[] = {1000, 2000, 5000};
    int num_combinations = 0;
	int i, j, k;
    for (i = 0; i <= total_amount / denominations[0]; i++) {
        for ( j = 0; j <= total_amount / denominations[1]; j++) {
            for ( k = 0; k <= total_amount / denominations[2]; k++) {
                if (i * denominations[0] + j * denominations[1] + k * denominations[2] == total_amount) {
                    printf("Phuong an %d:\n", ++num_combinations);
                    printf("Giay 1000 dong: %d\n", i);
                    printf("Giay 2000 dong: %d\n", j);
                    printf("Giay 5000 dong: %d\n", k);
                    printf("\n");
                }
            }
        }
    }

    return 0;
}

