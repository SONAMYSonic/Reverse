#include <stdio.h>

int main(void)
{
	char score;
	int x;
	int y;
	int z;

	printf("�����Է�:");
	scanf_s("%c", &score);
	printf("������Է�:");
	scanf_s("%d", &x);
	printf("������Է�:");
	scanf_s("%d", &y);
	printf("���м����Է�:");
	scanf_s("%d", &z);
	
	printf("���� : %d\n", x + y + z);
	printf("��� : %d\n", (x + y + z) / 3);

	return 0;
}