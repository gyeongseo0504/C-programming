#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#define pi 3.141592   //#define으로 pi가 3.141592 라는걸 선언해준다

int main(void) {

	float radius, surface, volume;   //반지름 표면적 체적을 각각 소수로 저장해준다 

	printf("구의 반지름을 입력하세요 : "); 

	scanf("%f", &radius);		
	//scanf("입력받을 형태", &변수이름); 에서 &radius라는 변수에 음수형태의 값을 받아서 radius에 넣어줍니다 

	surface = 4.0 * pi * radius * radius;
	//표면적은 4 곱하기 파이 곱하기 반지름의 제곱이다

	volume = (4.0 / 3.0) * pi * radius * radius * radius;
	//체적은 4 곱하기 파이 곱하기 반지름의 세제곱이다

	printf("구의 표면적 : %.2f\n", surface);
	//구의 표면적뒤 %.2f(소수)에 surface값을 넣어서 출력 해준다 

	printf("구의 체적 : %.2f\n", volume);
	//구의 표면적뒤 %.2f(소수)에 volume값을 넣어서 출력 해준다 

	return 0;
}