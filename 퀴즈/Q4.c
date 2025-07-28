#define CRS_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int year, age;

	scanf_s("%d", &year);

	age = 2025 - year;

	printf("만%d세", age);

	return 0;
}
