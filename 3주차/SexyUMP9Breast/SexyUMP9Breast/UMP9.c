#include <stdio.h>

int main(void)
{
	int a, b, c, d;

	printf("���� A�� �Է��Ͻÿ�:");
	scanf_s("%d", &a);
	printf("���� B�� �Է��Ͻÿ�:");
	scanf_s("%d", &b);
	printf("���� C�� �Է��Ͻÿ�:");
	scanf_s("%d", &c);
	printf("���� D�� �Է��Ͻÿ�:");
	scanf_s("%d", &d);

	printf("S�� %d�Դϴ�.\n", a + b + c + d);
	printf("M�� %d�Դϴ�.\n", (a + b + c + d) / 4);

	return 0;
}