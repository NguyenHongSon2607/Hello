#include <stdio.h>

void showMessage(int mgs) {
	printf("Hello %d\n", mgs);
	
}

int main () {
	showMessage(10);
	showMessage(20);
	showMessage(30);
	return 0;
}
