#include <stdio.h>
#include <string.h>

//  khai bao data cho sinh vien
struct SinhVien {
    char ten[50];
    int tuoi;
    char diaChi[100];
    char email[50];
    char gioiTinh[10];
    char sdt[15];
};

int main() {
    int choice;
    struct SinhVien sv; /*  khai bao bien de luu info sv */
    int isInfoEntered = 0; /*  value check info sv da duoc nhap chua  */

    while (1) { 
    	/*  dung while(1) - vong lap vo han <->
		 input menu & cho phep user chon */
        printf("\nMENU:\n");
        printf("1. Enter studen information:\n");
        printf("2. Display studen information:\n");
        printf("3. End program...\n");
        printf("You can choice 1 of 3(1,2,3):");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                 /* enter info studen  */
                 /* su dung '%[^\n]s' de nhap ca dong van ban*/
                printf("Enter name:");
                scanf(" %[^\n]s", sv.ten);
                printf("Enter age:");
                scanf("%d", &sv.tuoi);
                printf("Enter address: ");
                scanf(" %[^\n]s", sv.diaChi);
                printf("Enter email: ");
                scanf(" %[^\n]s", sv.email);
                printf("Enter sex: ");
                scanf(" %[^\n]s", sv.gioiTinh);
                printf("Enter phoneNumer: ");
                scanf(" %[^\n]s", sv.sdt);
				
				 /*  save thong tin cua sinhVien*/
                isInfoEntered = 1; 
                break;
                
                 /* if user choice ex2
			         -> student information( neu da duoc nhap tu ex1)
			        else -> input ' input "You have....info yet" ' 
				*/      
            case 2:
                if (isInfoEntered) {
                    printf("\nStudent Information:\n");
                    printf("Name: %s\n", sv.ten);
                    printf("Age: %d\n", sv.tuoi);
                    printf("Address: %s\n", sv.diaChi);
                    printf("Email: %s\n", sv.email);
                    printf("Sex: %s\n", sv.gioiTinh);
                    printf("Phonenumber: %s\n", sv.sdt);
                } else {
                    printf("you have enter student information.\n");
                }
                break;
            case 3:
                printf("End program.\n");
                return 0; 
            default:
                printf("Invaid selection. Plese choice again.\n");
		}
    }

   	return 0;
}





