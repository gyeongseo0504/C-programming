#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct important
{
	int age;
	double grade[3];
	char name[100];

};
int main()
{
	struct important person;

	srand(time(NULL));

	person.age = rand() % 50;
	for (int i = 0; i < 3; i++)
	{
		person.grade[i] = (double)rand() / RAND_MAX * 100.0;
	}

	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", person.name);

	printf("%s ���� : %d\n", person.name, person.age);
	printf("%s ���� ���� : %lf\n", person.name, person.grade[0]);
	printf("%s ���� ���� : %lf\n", person.name, person.grade[1]);
	printf("%s ���� ���� : %lf\n", person.name, person.grade[2]);


	return 0;
}