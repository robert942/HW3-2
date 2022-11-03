#include <stdio.h>
#include <stdlib.h>

void Hanoi(int, char, char, char);

int main(void)
{
	int n;
	char A = 'A', B = 'B', C = 'C';

	printf("�п�J�@�Ӿ��:");
	scanf_s("%d", &n);
	Hanoi(n, A, B, C);

	system("pause");
	return 0;
}

void Hanoi(int n, char A, char B, char C)
{
	if (n == 1)
		printf("�L�l�q%c����%c\n", A, C);
	else
	{
		Hanoi(n - 1, A, C, B);
		printf("�L�l�q%c����%c\n", A, C);
		Hanoi(n - 1, B, A, C);
	}
}