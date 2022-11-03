#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, m, n;

	printf("請輸入兩個整數:");
	scanf_s("%d%d", &a, &b);
	m = a;
	n = b;

	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d和%d的最小公倍數為:%d\n", m, n, m * n / a);

	system("pause");
	return 0;
}