#include <stdio.h>

int dataList[100];	/*  khai bao dataList[100] co 100 phan tu	*/

int length = 0;		/* 	bien do dai de theo doi array(element) */

/*	ham  + -> array(element)	*/
void addElement(int x) {
  /*	kiem tra neu trong array con thua	*/
  if (length < 100) {
    /* add x vao vi tri hien tai cua mang */
    dataList[length] = x;
    /*	tang bien do dai len 1 de danh dau viec them phan tu moi	*/
    length++;
    printf("The element %d has been added to the network.\n", x);
  } else {
    printf("This is the same, can't not add new element.\n");
  }
}

/*	sap xep mang theo thu tu ( be den lon)	*/
void sortArray() {
  int i, j, temp;
  for (i = 0; i < length - 1; i++) {
    for (j = i + 1; j < length; j++) {
      if (dataList[i] > dataList[j]) {
        temp = dataList[i];
        dataList[i] = dataList[j];
        dataList[j] = temp;
      }
    }
  }
  printf("Bring after copying: \n");
  for (i = 0; i < length; i++) {
  	printf("%d", dataList[i]);
  }
  printf("\n");
}

/*	ham tim kiem cac phan tu trong mang va tra ve so lan suat hien	*/
int searchElement(int x) {
	int count = 0;
	int i;
	for(i = 0; i < length; i++) {
		if (dataList[i] == x) {
			count++;
		}
	}
	return count;
}

/*	ham de xoa phan tu trong mang	*/
void deleteElement(int x) {
  int i, j;
  for (i = 0; i < length; i++) {
    if (dataList[i] == x) {
      for (j = i; j < length - 1; j++) {
        dataList[j] = dataList[j + 1];
      }
      /*	giam element(length-1) de danh dau array co element da bi delete	*/
      length--;

      /*	giam i de check element atfer delete  	*/
      i--;
    }
  }
  printf("Delete the elements with value %d from the beginning.\n", x);
}

/*	ham de hien thi danh sach phan tu	*/
void displayArray() {
  printf("List of element is the field:\n");
  int i;
  for (i = 0; i < length; i++) {
    printf("%d", & dataList[i]);
  }
  printf("\n");
}

int main() {
  int choice, x;

  do {
    printf("\nProgram menu: \n");
    printf("1. Add input element.\n");
    printf("2. Sap with the lost income\n");
    printf("3. Find element in the network.\n");
    printf("4. Delete internal element\n");
    printf("5. Display the list of internal element.\n");
    printf("6. Exit.\n");
    printf("Select parmeters (1, 2, 3, 4, 5, 6): ");
    scanf("%d", &choice);

    switch (choice) {
	    case 1:
	      printf("Enter adddtional value: ");
	      scanf("%d", &x);
	      addElement(x);
	      break;
	    case 2:
	      sortArray();
	      break;
	    case 3:
	      printf("Enter the search value: ");
	      scanf("%d", &x);
	      int count = searchElement(x);
	      printf("Find a %d element with value %d in the range.\n", count, x);
	      break;
	    case 4:
	      printf("Enter the value to delete: ");
	      scanf("%d", &x);
	      deleteElement(x);
	      break;
	    case 5:
	      displayArray();
	      break;
	    case 6:
	      printf("Program end.\n");
	      break;
	    default:
	      printf("The selection is invalid. Plese select again.\n");
	      break;
	    }
  }
  while (choice != 6);

  return 0;
}
