#include <stdio.h> 
#include <stdlib.h>

/*	khai bao pointer t, element n = 0 */
int *t;
int n = 0; 

void nhapMang() {
	printf("Enter the element in array: ");
	scanf("%d", &n);
	
	// dung (if) de giai phong bo nho neu mang da dc cap phat truoc do 
	if ( t != NULL ) {
		free(t);
	}
	
	//cap phat bo nho cho array C
	t = (int *) malloc (n * sizeof(int));
	
	printf("Enter the element in array");
	int i;
	for (i = 0 ; i < n ; i ++) {
		printf("Elemnt %d: ", i + 1);
		scanf("%d", &t[i]);
	}
}

/*	ham tinh tong cua mang	*/
void hienThiMang() {
	if ( n == 0 ) {
		printf("Empty array. Add the element frist.\n");
		return ;
	}
	
	printf("List a element in array: \n");
	int i;
	for (i = 0; i < n; i++) {
		printf("%d", t[i]);
	}
	
	printf("\n");	
}

/*	sap xep array theo thu tu tang dan	*/
void sapXepMang() {
	
	if( n == 0 ) {
		printf("Empty array. Plese add element frist.\n");
	}	return;
int j, i;
	for (i = 0; i < n; i++) {
		for(j = i + 1; j < n; j++) {
			if ( t[i] > t[j] ) {
				int temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
	printf("Array after arrange:\n");
	hienThiMang();
}

int main () {
	int choice;
	
	do{
		printf("\nMenu program:\n");
		printf("1. Enter n.\n");
		printf("2. Display list of element in array.\n");
		printf("3. Calculate sum of element in array.\n");
		printf("4. Arrange the element in array in ascending order.\n");
		printf("5. Exit\n");
		printf("Select function 1-5: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				nhapMang();
				break;
			case 2:
				hienThiMang();
				break;
			case 3:
				printf("Sum of element in array: %d\n", tinhTong());
				break;
			case 4:
				sapXepMang();
				break;
			case 5:
				// giai phong bo nho befor exit
				if ( t != NULL) {
					free(t);
				}
				printf("Exit program.\n");
				break;
			default:
				printf("Invalid selection. Plese choice again.\n");
		}
	} while (choice != 5);
	
	return 0;
}
