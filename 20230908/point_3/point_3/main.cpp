#include <stdio.h>

int main(void)
{
	int num = 123;
	int* ptr = &num; //�ٸ� ������ �ּҸ� �����ϴ� ����
	printf("%d\n", *ptr);	// �ּҰ� ����Ű�� ��(����) ���
	//printf("%d\n", ptr);	// �ּڰ� ���

	return 0;
};