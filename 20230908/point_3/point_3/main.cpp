#include <stdio.h>

int main(void)
{
	int num = 123;
	int* ptr = &num; //다른 변수의 주소를 저장하는 변수
	printf("%d\n", *ptr);	// 주소가 가르키는 값(내용) 출력
	//printf("%d\n", ptr);	// 주솟값 출력

	return 0;
};