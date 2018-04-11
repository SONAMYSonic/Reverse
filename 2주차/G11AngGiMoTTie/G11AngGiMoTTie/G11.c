#include <stdio.h>

int main(void)
{
	char score;
	int x;
	int y;
	int z;

	printf("학점입력:");
	scanf_s("%c", &score);
	printf("국어성적입력:");
	scanf_s("%d", &x);
	printf("영어성적입력:");
	scanf_s("%d", &y);
	printf("수학성적입력:");
	scanf_s("%d", &z);
	
	printf("총점 : %d\n", x + y + z);
	printf("평균 : %d\n", (x + y + z) / 3);

	return 0;
}