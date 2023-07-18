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

	printf("이름을 입력하세요: ");
	scanf("%s", person.name);

	printf("%s 나이 : %d\n", person.name, person.age);
	printf("%s 수학 성적 : %lf\n", person.name, person.grade[0]);
	printf("%s 영어 성적 : %lf\n", person.name, person.grade[1]);
	printf("%s 물리 성적 : %lf\n", person.name, person.grade[2]);


	return 0;
}