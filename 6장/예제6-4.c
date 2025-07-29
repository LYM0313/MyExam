#define _CRS_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
