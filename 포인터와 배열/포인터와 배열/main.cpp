#include <stdio.h>

int main() //1易帚
{
	char a[8];
	char* ptr;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'e';
	a[5] = 'f';
	a[6] = 'g';
	a[7] = '\0';

	ptr = a;
	printf("%c\n", *ptr);

	ptr = ptr + 3;
	printf("%c\n", *ptr);
}

/*int main() //2易帚
{
	char a[8];
	char* ptr;
	int i;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'e';
	a[5] = 'f';
	a[6] = 'g';
	a[7] = '\0';

	ptr = a;
	*ptr = 'Z';

	ptr += 3;
	*ptr = 'W';

	printf("%s\n", a);
}

int main() //3易帚
{
	char a = 1;
	char* ptr;

	ptr = &a;

	*ptr = 128;

	printf("%d\n", a);
}

void func() //4易帚
{
	printf("function\n");
}

int main()
{
	void (*ptr)();

	ptr = &func;

	(*ptr)();
}*/