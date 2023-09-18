#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main(int argc, char *argv[]) {
	int N;
	printf("\nNhap do cao tam giac N = ");
	scanf("%d" ,&N);
	
	int i, j;
	printf("\Tao Giac\n");
	for (i=0;i<N;i++){
		//tao do cao
		for (j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}



