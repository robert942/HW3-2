#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main(void)
{
	int m, n, a;

	printf("�п�J��Ӿ��:");
	scanf_s("%d%d", &m, &n);
	a = power(m, n);
	printf("%d��%d���謰:%d\n", m, n, a);

	system("pause");
	return 0;
}

int power(int m, int n)
{
	int i;
	int count = m;

	for (i = 1; i < n; i++)
		m *= count;

	return m;
}