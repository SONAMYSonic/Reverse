#include <stdio.h>

int main(void)
{
	int w;
	int h;

	printf("★★★★사각형 넓이 구하기★★★★\n\n");

	printf("너비 입력:");
	scanf_s("%d", &w);
	printf("높이 입력:");
	scanf_s("%d", &h);
	printf("넓이 = %d\n", w*h);

	system("pause");
	return 0;
}