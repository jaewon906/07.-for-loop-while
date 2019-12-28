#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a, n=0;
	printf("1부터 n 까지의 합을 구하는 프로그램\nn을 입력하세요\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		a = a + i;
	}
	printf("%d", a);
	system("pause");
	return 0;

}