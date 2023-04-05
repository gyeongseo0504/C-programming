#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void)
{
	double AC, AE, BC, DE; //AC : AE = BC : DE 대칭값을 입력해준다 

	printf("지팡이의 높이를 입력하시오: ");
	scanf("%lf", &BC);
	//소숫점 자리까지의 값을 입력해준다 

	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf("%lf", &AC);

	printf("피라미드까지의 거리를 입력하시오: ");
	scanf("%lf", &AE);

	DE = AE * BC / AC;
	printf("피라미드의 높이는 %.2lf입니다. \n", DE);

	return 0;
}