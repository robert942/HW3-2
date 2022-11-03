#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;

	printf("請輸入一個英文字母:");
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