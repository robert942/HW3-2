#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, m, n;

	printf("�п�J��Ӿ��:");
	scanf_s("%d%d", &a, &b);
	m = a;
	n = b;

	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d�M%d���̤p�����Ƭ�:%d\n", m, n, m * n / a);

	system("pause");
	return 0;
}