#include <stdio.h>

float calculate_sum(float a, float b) {
	return a + b;
}

float calculate_effectiveness(float a, float b) {
	return a - b;	
}

float calculate_volume(float a, float b) {
	return a * b;
}

float calculate_compassion(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Errol: Cannot divided by 0.\n");
        return 0;
    }
}

int main () {
	float a = 15.5;
	float b = 5.0;
	
	printf("Sum:: %.2f\n", calculate_sum(a, b));
	printf("Effectiveness: %.2f\n", calculate_effectiveness(a, b));
	printf("Volume: %.2f\n", calculate_volume(a, b));
	
	//ktra truong hop thuong
	
	if ( b != 0) {
		printf("Compassion: %.2f\n", calculate_compassion(a, b));
	} else {
		printf("Errol: Cannot divided by 0.\n");
	}
	return 0;
}
