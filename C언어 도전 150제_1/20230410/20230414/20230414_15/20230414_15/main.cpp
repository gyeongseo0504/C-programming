#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	const char* str = "대한민국";

	printf("%s\n", str);
	printf("char*은 문자열을 저장할때 쓰고, char을 쓰면 char*형식의 엔터티를 초기화할 수 없습니다 라고 츨력된다 그래서 char*앞에 const를 붙여주면 된다.");
}