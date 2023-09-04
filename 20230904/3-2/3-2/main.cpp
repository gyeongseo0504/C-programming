#include <stdio.h>

int main(void) {

	FILE* fp = NULL;
	int c; // 파일로부터 읽어드릴 문자를 저장할 변수

	// 쓰기 모드로 파일을 열어 문자 'a'를 해당 파일에 쓴다.
	fopen_s(&fp, "text.txt", "wt");
	fputc('a', fp);
	fclose(fp);

	// 읽기 모드로 파일을 열어 한 개의 문자를 파일로부터 읽는다.
	fopen_s(&fp, "text.txt", "rt");
	c = fgetc(fp);
	printf("%d: %c\n", c, c); // 해당 문자를 모니터에 정수, 문자 형태로 출력한다.
	fclose(fp);

	return 0;
}