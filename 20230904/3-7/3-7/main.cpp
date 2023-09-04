#include <stdio.h>

int main(void) {

	FILE* fp;
	int cnt = 0;

	fopen_s(&fp, "text.txt", "wt");
	fputc('a', fp);
	fputc('b', fp);

	fclose(fp);

	fopen_s(&fp, "text.txt", "rt");
	while (!feof(fp)) {
		cnt++;
		printf("%d ", feof(fp));
		printf("%c ", fgetc(fp));
		printf("%d \n", feof(fp));
	}
	printf("\ncnt = %d\n", cnt);

	fclose(fp);

	return 0;
}