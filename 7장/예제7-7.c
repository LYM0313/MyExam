#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void fruit(int count);

int main() {
	fruit(1);

	return 0;
}

void fruit(int count) {
	printf("apple\n");
	if (count == 3) {
		return;
	fruit(count + 1);
	printf("jam\n");
	}
}
