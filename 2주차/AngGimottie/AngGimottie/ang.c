#include <stdio.h>

int main(void)
{
	int w;
	int h;

	printf("�ڡڡڡڻﰢ���� ���� ���ϱ�ڡڡڡ�\n\n");

	printf("�ʺ� �Է�:");
	scanf_s("%d", &w);
	printf("���� �Է�:");
	scanf_s("%d", &h);
	printf("���� = %d\n", w*h * 1 / 2);

	system("pause");
	return 0;
}