#include <stdio.h>

int main(void) {

	FILE* fp = NULL;
	int c; // ���Ϸκ��� �о�帱 ���ڸ� ������ ����

	// ���� ���� ������ ���� ���� 'a'�� �ش� ���Ͽ� ����.
	fopen_s(&fp, "text.txt", "wt");
	fputc('a', fp);
	fclose(fp);

	// �б� ���� ������ ���� �� ���� ���ڸ� ���Ϸκ��� �д´�.
	fopen_s(&fp, "text.txt", "rt");
	c = fgetc(fp);
	printf("%d: %c\n", c, c); // �ش� ���ڸ� ����Ϳ� ����, ���� ���·� ����Ѵ�.
	fclose(fp);

	return 0;
}