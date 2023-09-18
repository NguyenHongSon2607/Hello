#include <stdio.h>

// Tao ham tinh chu vi hcn
	void ChuViHCN (int a, int b) {
	// Khai bao bien P la chu vi hcn
	int p;
	// Tinh chu vi su dung cong thuc dai + rong * 2
	p = (a + b) * 2;
	// Hien thi chu vi ra man hinh 
	printf("\nChu vi hinh chu nhat là : %d", p);
}

// Tao ham tinh dien tich hcn 
	void DienTichHCN(int a, int b) {
	// khai bao bien s la dien tich hcn
	int s;
	// tin dien tich bang cong tich dai * rong
	s = a * b;
	// hien thi ket qua ra man hinh
	printf("\nDien tich hinh chu nhat la: %d", s);
}

	int main() {
	// khai bao 2 bien a va b la chieu dai, chieu rong
	int a , b;
	// yeu cau nguoi dung nhap vao chieu rong va chieu dai
	printf("Nhap chieu dai a: ");
	scanf("%d", &a);
	printf("Nhap chieu dai b: ");
	scanf("%d" ,&b);
	// goi ham tinh chu vi va dien tich
	ChuViHCN(a, b);
	DienTichHCN(a, b);
	return 0;
}
