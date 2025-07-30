#define CRS_SECURE_NO_WARNINGS

#include<stdio.h>

void fruit();

int main() {
	fruit();

	return 0;
}

void fruit() {
	printf("apple\n");
	fruit();
}

