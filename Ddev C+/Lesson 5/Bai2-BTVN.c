/*Hinh chu nhat dac
	#include <stdio.h>
	
	int main () {
		int m ,n, i, j;
		printf("Enter the length of the rectangle: ");
		scanf("%d" ,&m);
		printf("Enter the width of the rectangle: ");
		scanf("%d" ,&n);
		
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				printf("*");
			}
			printf("\n");
		} 
		return 0;
	} 
*/

/*Hinh chu nhat rong
#include <stdio.h>

int main() {
    int m, n, i, j;
	// yeu cau nguoi dung nhap chieu dai
    printf("Enter the length (m) of the largest shape:  ");
    scanf("%d", &m);
    // yeu cau nguoi dung nhap chieu rong
    printf("Enter the width (n) of the rectangle: ");
    scanf("%d", &n);
	
	// su dung ham for de 
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                printf("* ");
            } else {
                printf("  "); // S? d?ng kho?ng tr?ng d? t?o ra hình r?ng
            }
        }
        printf("\n");
    }

    return 0;
}
*/
