#include <stdio.h>

int main(void)
{
	double kg;
	double m;

	printf("�����Ը� �Է��ϼ���(kg) :");
	scanf_s("%lf", &kg);
	printf("Ű�� �Է��ϼ���(m) :");
	scanf_s("%lf", &m);
	printf("����� BMI�� : %lf�Դϴ�.", kg + m);

	return 0;
}