#include <stdio.h>

int main(void)
{
	int w;
	int h;

	printf("�ڡڡڡڻ簢�� ���� ���ϱ�ڡڡڡ�\n\n");

	printf("�ʺ� �Է�:");
	scanf_s("%d", &w);
	printf("���� �Է�:");
	scanf_s("%d", &h);
	printf("���� = %d\n", w*h);

	system("pause");
	return 0;
}