#include <stdio.h>
#include <string.h>

int main () {
	char s1[100], s2[50];
	
	printf("Enter the first string: ");
	scanf("%[^\n]s", s1);
	
	printf("Enter the second string: ");
	
	scanf("%s", s2);
	
	strcat (s1, s2);
	int length = strlen(s1);
	printf("Concatenated string: %s\n", s1);
	printf("Length of concatenated string: %d\n", length);
	
	return 0;
}
