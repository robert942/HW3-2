#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int);

int main(void)
{
	int a, b;

	printf("請輸入一個整數:");
	scanf_s("%d", &a);
	b = Fibonacci(a);
	printf("斐波那契數的第%d項為:%d\n", a, b);

	system("pause");
	return 0;
}

int Fibonacci(int a)
{
	if (a > 2)
	{
		int result = Fibonacci(a - 1) + Fibonacci(a - 2);

		return result;
	}
	else
		return 1;
}