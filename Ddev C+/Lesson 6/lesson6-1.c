#include <stdio.h>

int main () {
	int a[100];
	int n;
	printf("\nEnter the number of elements n= ");
	do {
		scanf("%d", &n);
		if ( n <= 0) {
			printf("\nTry Again= ");
		}
	}	while (n <= 0);
	
	int i;
	for (i = 0; i < n; i++){
		printf("\nEnter a[%d]= ",i);
		scanf("%d", &a[i]);
		}
		
	// dung thuat toan sap xep 
	int tg;
	int j;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if(a[i] < a[j]) {
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	
	printf("\nArray after sorting is = ");
	for (i = 0; i < n; i++) {
		printf("%3d", a[i]);
		}
}
