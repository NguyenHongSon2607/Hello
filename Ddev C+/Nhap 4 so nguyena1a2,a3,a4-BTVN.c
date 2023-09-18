#include <stdio.h>

int main () {
	int a1, a2, a3, a4;
//	nhap 4 so nguyen tu nguoi dung
	printf("Nhap so nguyen a1: ");
	scanf("%d" ,&a1);
	
	printf("Nhap so nguyen a2: ");
	scanf("%d" ,&a2);
	
	printf("Nhap so nguyen a3: ");
	scanf("%d" ,&a3);
	
	printf("Nhap so nguyen a4: ");
	scanf("%d" ,&a4);

//tim so nguyen lon nhat
int max = a1;
	if (a2 > max) {
		max = a2;
	}
	
	if (a3 > max) {
		max = a3;
	}
	
	if (a4 > max) {
		max = a4;
	}

// tim so nguyen nho nhat
int min = a1;
	if (a2 < min) {
		min = a2; 
	}
	
	if (a3 < min) {
		min = a3;
	}
	
	if (a4 < min) {
		min = a4;
	}
	
// hien thi ket qua
	printf("So nguyen lon nhat la: %d\n", max);
	printf("So nguyen nho nhat la: %d\n", min);
	return 0;
}
