//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
///* khai bao poinper*/
//    int *p; 
//
///* dung malloc => cap phat p(10 phan tu) */
//    p = (int *)malloc(10 * sizeof(int));
//	/* thoa man p == null 
//	-> errol enough memory
//	 */
//    if (p == NULL) {
//        printf("Not enough memory!\n");
//        return 1;
//    }
//
//	
///*element in array */
//    printf("Enter 10 integet number: \n");
//	int i;
//    for (i = 0; i < 10; i++) {
//        printf("Enter number %d: ", i + 1);
//        scanf("%d", &p[i]);
//    }
//
// /*Calculate the sum of number divisible by 2 [Z /2] */
//    int sum = 0;
//    for ( i = 0; i < 10; i++) {
//        if (p[i] % 2 == 0) {
//            sum += p[i];
//        }
//    }
//
//    printf("Calculate the sum of number divisible by 2 is: %d\n", sum);
//
//
///* free: giai phong data: sau khi su dung xong code */
//    free(p);
//
//    return 0;
//}

