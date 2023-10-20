#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("저항값 구하기\n");
	printf("4색띠 라면 4, 5색띠 라면 5를 입력하세요 :");
	scanf("%d", &num);

	if (num == 4)
	{
		double color1, color2, color3, color4;
		double ohm = 0;
		double ans = 10;
		double error = 0;
		double result;

		printf("흑 = 0, 갈 = 1, 적 = 2, 등 = 3, 황 = 4, 록 = 5, 청 = 6, 자 = 7, 회 = 8, 백 = 9, 금 = 10, 은 = 11, 없음 = 12\n");
		printf("첫번째 색을 입력하세요 :\n");
		scanf("%lf", &color1);
		printf("두번째 색을 입력하세요 :\n");
		scanf("%lf", &color2);
		printf("세번째 색을 입력하세요 :\n");
		scanf("%lf", &color3);
		printf("네번째 색을 입력하세요 :\n");
		scanf("%lf", &color4);

		if (color3 == 10)
			ans = 0.1;
		else if (color3 == 11)
			ans = 0.01;
		else
		{
			for (int i = 1; i < color3; i++)
			{
				ans *= 10;
			}
		}

		switch ((int)color4)
		{
		case 1:
			result = 1;
			break;
		case 2:
			result = 2;
			break;
		case 5:
			result = 0.5;
			break;
		case 6:
			result = 0.25;
			break;
		case 7:
			result = 0.1;
			break;
		case 8:
			result = 0.05;
			break;
		case 10:
			result = 5;
			break;
		case 11:
			result = 10;
			break;
		case 12:
			result = 20;
			break;
		default:
			result = 0.0;
			break;
		}

		ohm = (color1 * 10 + color2) * ans;
		if (ohm >= 1000 && ohm < 1000000)
		{
			ohm /= 1000;
			printf("저항값 = %.1lfKΩ 오차 = ±%.1lf", ohm, result);
		}
		else if (ohm >= 1000000 && ohm < 1000000000)
		{
			ohm /= 1000000;
			printf("저항값 = %.1lfMΩ 오차 = ±%.1lf", ohm, result);
		}
		else
		{
			ohm /= 1000000000;
			printf("저항값 = %.1lfGΩ 오차 = ±%.1lf", ohm, result);
		}

	}/////////////////////////////////////////////////////////////////////////////
	else
	{
		double color5, color6, color7, color8, color9;
		double ohm1 = 0;
		double ans1 = 10;
		double error1 = 0;
		double result1;

		printf("흑 = 0, 갈 = 1, 적 = 2, 등 = 3, 황 = 4, 록 = 5, 청 = 6, 자 = 7, 회 = 8, 백 = 9, 금 = 10, 은 = 11, 없음 = 12\n");
		printf("첫번째 색을 입력하세요 :\n");
		scanf("%lf", &color5);
		printf("두번째 색을 입력하세요 :\n");
		scanf("%lf", &color6);
		printf("세번째 색을 입력하세요 :\n");
		scanf("%lf", &color7);
		printf("네번째 색을 입력하세요 :\n");
		scanf("%lf", &color8);
		printf("다섯번째 색을 입력하세요 :\n");
		scanf("%lf", &color9);

		if (color8 == 10)
			ans1 = 0.1;
		else if (color8 == 11)
			ans1 = 0.01;
		else
		{
			for (int i = 1; i < color8; i++)
			{
				ans1 *= 10;
			}
		}

		switch ((int)color9)
		{
		case 1:
			result1 = 1;
			break;
		case 2:
			result1 = 2;
			break;
		case 5:
			result1 = 0.5;
			break;
		case 6:
			result1 = 0.25;
			break;
		case 7:
			result1 = 0.1;
			break;
		case 8:
			result1 = 0.05;
			break;
		case 10:
			result1 = 5;
			break;
		case 11:
			result1 = 10;
			break;
		case 12:
			result1 = 20;
			break;
		default:
			result1 = 0.0;
			break;
		}

		ohm1 = (color5 * 100 + color6 * 10 + color7) * ans1;
		if (ohm1 >= 1000 && ohm1 < 1000000)
		{
			ohm1 /= 1000;
			printf("저항값 = %.1lfKΩ 오차 = ±%.1lf", ohm1, result1);
		}
		else if (ohm1 >= 1000000 && ohm1 < 1000000000)
		{
			ohm1 /= 1000000;
			printf("저항값 = %.1lfMΩ 오차 = ±%.1lf", ohm1, result1);
		}
		else
		{
			ohm1 /= 1000000000;
			printf("저항값 = %.1lfGΩ 오차 = ±%.1lf", ohm1, result1);
		}
	}
}