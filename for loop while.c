#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a, n=0;
	printf("1���� n ������ ���� ���ϴ� ���α׷�\nn�� �Է��ϼ���\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		a = a + i;
	}
	printf("%d", a);
	system("pause");
	return 0;

}