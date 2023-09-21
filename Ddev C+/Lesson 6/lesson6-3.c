#include <stdio.h>

int main () {
	int N;
	/*	Yeu cau user nhap so nguyen	*/
	printf("Enter the number of integers (N): ");
	scanf("%d", &N);
	
	if ( N <= 0) {
		printf("Invalid input. N should be a postive integer. \n");
		/*	exit with error code	*/
		return 1;
	}	
	
	int arr [N];
	
	/*	Nhap N	*/
	printf("Enter %d integers, seprtared by spaces:\n", N);
	int i;
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		}
	
	/*	input danh sach dao nguoc	*/
	printf("Reversed list: ");
	for (i = N - 1; i >= 0; i--) {
		printf("%2d", arr[i]);
	}
	printf("\n");
	return 0;
}
