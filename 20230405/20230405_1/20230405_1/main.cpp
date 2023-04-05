#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {

	int height, ft;
	double inch;
	//키랑 피트는 정수형으로 구하고  인치는 소숫점까지 구하니까 

	printf("키를 입력하세요(cm): ");
	scanf("%d", &height);

	ft = (height / 2.54 / 12); 
	//cm를 2.54로 나누면 인치, 인치를 12로 나누면 피트가 된다
	inch = (height - ft * 2.54 * 12) / 2.54;

	printf("%dcm는 %d피트 %.2lf인치입니다.\n", height, ft, inch);
	//두번쨰 자리 수까지만 수해야되니까 %.2를 써준다 
	return 0;
}