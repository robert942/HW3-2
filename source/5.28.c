#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;

	printf("�п�J�@�ӭ^��r��:");
	scanf_s("%c", &ch);
	if (ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
		printf("%c\n", ch);
	}
	else
	{
		ch = ch - 32;
		printf("%c\n", ch);
	}

	system("pause");
	return 0;
}