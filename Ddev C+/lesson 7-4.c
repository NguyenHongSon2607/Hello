#include <stdio.h>


//tinh giai thua
int tinhGiaiThua(int n) {
	if( n == 0 || n == 1) {
		return 1; 
	} else {
		return n * tinhGiaiThua(n -1);
	}
}

//tinh tong 
int tinhTong(int m){
	int tong = 0, i;
	for (i = 1; i <= m; i++){
		tong += i;
	}
	return tong;
}

int main() {
	int giaiThua = tinhGiaiThua(5);
	int tong = tinhTong (10);
	
	printf("The factorial of 5 is: %d\n", giaiThua);
	printf("Sum of number 1 - 10 is: %d\n", tong);
	
	if(giaiThua == tong) {
		printf("The factorial of 5 is the sum of the number 1 - 10.\n");
	} else {
		printf("The factorial of 5 is not equal of the number 1 - 10.\n");
	}
	return 0;
}

