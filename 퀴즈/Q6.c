#define _CRS_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int score;

	scanf_s("%d", &score);

	if (score >= 70) {
		printf("합격입니다!");
	}
	else {
		printf("불합격입니다.");
	}
	return 0;
}
