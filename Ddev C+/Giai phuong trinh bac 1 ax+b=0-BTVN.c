#include <stdio.h>

int main() {
  double a, b;

  // Nhap he so a va b tu nguoi dung
  printf("Nhap he so a: ");
  scanf("%lf", & a);

  printf("Nhap he so b: ");
  scanf("%lf", & b);
  // su dung if va else de kiem tra dieu kien
  // neu a = 0 va b = 0 thi phuong trinh co vo nghiem
  if (a == 0) {
    if (b == 0) {
      printf("Phuong trinh co vo so nghiem.\n");
      // neu a = 0 va b ! 0 thi phuong trinh vo nghiem 
    } else {
      printf("Phuong trinh vo nghiem.\n");
    }
  }	// neu khong thi se tinh nghiem x va input
  	else {
  		double x = -b / a;
		printf("Nghiem cua phuon trinh la x = %lf\n", x);	
  }
  return 0;
}
