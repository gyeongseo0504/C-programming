#include <stdio.h>

int main(void) {

	FILE* fp;
	char buffer[] = "hello";

	fopen_s(&fp, "text.txt", "wt");
	fputs(buffer, fp);
	fclose(fp);

	fopen_s(&fp, "text.txt", "rt");
	fseek(fp, 1, SEEK_SET); // 파일의 시작으로부터 1바이트만큼 떨어진 곳으로 파일 위치 표시자를 이동시킴
	printf("%c\n", fgetc(fp));
	fseek(fp, -1, SEEK_END); // 파일의 끝에서부터 -1바이트만큼 떨어진 곳으로 파일 위치 표시자를 이동시킴
	printf("%c\n", fgetc(fp));
	fclose(fp);

	return 0;
}