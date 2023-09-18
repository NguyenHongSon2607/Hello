#include <stdio.h>
#include <math.h>

int main () {
	double banKinh;
	// nhap ban kinh tu nguoi dung
	printf("Nhap ban kinh cua hinh tron: ");
	scanf("%ld" ,%banKinh);
	
	// tinh dien tich va chu vi
	double dienTich = M_PI * banKinh * banKinh;
	double chuVi = 2 * M_PI * banKinh;
	
	// in ra ket qua
	printf("Dien tich cua hinh tron la: %lf\n", dienTich);
	printf("Chu vi cua hinh tron la: %lf\n", chuVi);
	return 0;		
}
