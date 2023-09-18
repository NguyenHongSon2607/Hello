//#include <stdio.h>
//
///* Su dung ham de quy de tinh sum( 1-> N) */
//int sum(int n) {
//  /* Khai bao ham de quy 'sum', tham so 'n' */
//  /* 	base case(t.hop co so):
//  		-neu n = 0 -> tong cac so la 0
//  */
//  if (n == 0) {
//    return 0;
//  } else {
//    /* neu n ! 0 ( tinh tong 'n', 
//	tinh tong cua cac so tu 1 -> 'n-1'
//	*/
//    return n + sum(n - 1);
//  }
//}
//
//int main() {
//  int N;
//  /*yeu cau nguoi dung nhap du lieu */
//  printf("Enter the N: ");
//  scanf("%d", & N);
//
//  /* goi 'sum(N)' de tinh tong */
//  int result = sum(N);
//  printf("\nThe sum of numbers from 1 to %d is: %d\n", N, result);
//  printf("\nCode by Nguyen Hong Son C2311L\n");
//  return 0;
//}
