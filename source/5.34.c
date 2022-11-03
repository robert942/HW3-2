#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main(void)
{
	int m, n, a;

	printf("請輸入兩個整數:");
	scanf_s("%d%d", &m, &n);
	a = power(m, n);
	printf("%d的%d次方為:%d\n", m, n, a);

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