#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int);

int main(void)
{
	int a, b;

	printf("�п�J�@�Ӿ��:");
	scanf_s("%d", &a);
	b = Fibonacci(a);
	printf("���i�����ƪ���%d����:%d\n", a, b);

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