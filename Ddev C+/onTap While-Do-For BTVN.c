/*bai 1 tinh S(n) = 1 + 2 + 3 + … + n

//	vong lap for 
	#include <stdio.h>
	
	int main () {
		int n;
		// nhap gia tri cua n tu nguoi dung
		printf("Nhap gia tri cua n: ");
		scanf("%d", &n);
		
		//khoi tao bien sum de tinh tong
		int sum = 0;
		for ( int i = 1; i <= n; i++){
			// cong cac gia tri cua i vao bien sum
			sum += i;
		}	
		printf("Tong cac chu so tu 1 den %d la: %d\n", n , sum);
		return 0;
	}
*/

/* bai 2: tinh S(n) = 1^2 + 2^2 + … + n^2
	// vong lap do - while
	#include <stdio.h>
	
	int main () {
		int n;
		int i = 1;
		int sum = 0;
		
		//nhap gia tri n tu nguoi dung
		printf("Nhap n: ");
		scanf("%d", &n);
		// dung do while de khoi tao bien i = 1
		do {
			sum += i * i;
			i++; 	
			// tang gia tri i + 1 sau moi vong lap di qua 1 -> n => tinh tong cua cac binh phuong 
		} while (i <= n);
			printf("S(n) = %d\n", sum);
		return 0;
	}
*/

/*bai 3: tinh S(n) = 1 + ½ + 1/3 + … + 1/n

	// vong lap while
	
	#include <stdio.h>
	
	int main () {
		int n; 
		double sum = 0; //khoi tao tong bao dau la 0
		int i = 1; // khoi tao bien dem i ban dau la 1
		
	//	nhap gia tri tu nguoi dung
		printf("Nhap n: ");
		scanf("%d", &n);
		// dung 'i' duyet qua cac so tu 1 -> n.
		while (i <= n) {
			//qua cac vong lap them gia tri 1/n vao bien sum de tinh tong
			sum += 1.0 /i;
			i++;
		}
		// in gia tri S(n) voi 6 chu so thap phan.
			printf("S(n) = %.6lf\n", sum);
		return 0;
	}
*/

/* bai 4: tinh S(n) = ½ + ¼ + … + 1/2n

	// vong lap for 
	
	#include <stdio.h>
	
	int main () {
		int n;
		double sum = 0; //khoi tao tong bao dau la 0
		
		// nhap gia tri n tu nguoi dung
		printf("Nhap n: ");
		scanf("%d" ,&n);
		
		// dung for de tinh tong S(n)
		for (int i = 1; i <= n; i++){
			sum += 1.0 / (2 * i);
		// trong moi~ vong lap them gia tri 1/(2i) vao 'sum' de tinh tong
		}	
		// input ra giatri cua S(n)
			printf("S(n) = %.6lf\n", sum);
			return 0;
	}
*/

/*bai 5: tinh S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1);

// vong lap do-while 

#include <stdio.h>

int main() {
  int n;
  double sum = 0.0; // khoi tao tong ban dau la 0
  int i = 0; // khoi tao bien dem i ban dau la 0

  // nhap gai tri n tu nguoi dung
  printf("Nhap n: ");
  scanf("%d", & n);

  do {
    // tinh gia tri cua tung phan tu va cong vao tong
    sum += 1.0 / (2 * i + 1);

    // tang bien dem i len 1 de tiep tuc vong lap
    i++;

    //kiem tra dieu kien cua vong lap: i <= n
  } while (i <= n);
  // in ra tong S(n) voi 6 so thap phan
  printf("S(n) = %.6lf\n", sum);
  return 0;
}
*/
