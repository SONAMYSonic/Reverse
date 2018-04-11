#include <stdio.h>

int main(void)
{
	double kg;
	double m;

	printf("몸무게를 입력하세요(kg) :");
	scanf_s("%lf", &kg);
	printf("키를 입력하세요(m) :");
	scanf_s("%lf", &m);
	printf("당신의 BMI는 : %lf입니다.", kg + m);

	return 0;
}