#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main(void) {
	float score = 0.0;
	printf("성적을 입력하세요: ");
	scanf("%f", &score);

	if (score >= 90) {
		printf("A\n");
	}
	else if (score >= 80 && score < 90) {
		printf("B\n");
	}
	else if (score >= 70 && score < 80) {
		printf("C\n");
	}
	else if (score >= 60 && score < 70) {
		printf("D\n");
	}
	else {
		printf("F\n");
	}
}
*/

int main(void) {
	float score = 0.0;
	printf("성적을 입력하세요: ");
	scanf("%f", &score);
	switch (int(score / 10)) {
	case 9: case 10:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}
}