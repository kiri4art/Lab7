#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int years, months, i;

void main()
{
	system("chcp 1251");
	puts("¬ведите значение:");
	scanf("%d", &months);
	years = months / 12;
	months %= 12;
	switch (years)
	{
	case 0:
		switch (months)
		{
		case 1:
			printf("%d лет и %d мес€ц", years, months);
			break;
		case 2:
		case 3:
		case 4:
			printf("%d лет и %d мес€ца", years, months);
			break;
		default:
			printf("%d лет и %d мес€цев", years, months);
			break;
		}
		break;
	case 1:
		switch (months)
		{
		case 1:
			printf("%d год и %d мес€ц", years, months);
			break;
		case 2:
		case 3:
		case 4:
			printf("%d год и %d мес€ца", years, months);
			break;
		default:
			printf("%d год и %d мес€цев", years, months);
			break;
		}
		break;
	case 2:
	case 3:
	case 4:
		switch (months)
		{
		case 1:
			printf("%d года и %d мес€ц", years, months);
			break;
		case 2:
		case 3:
		case 4:
			printf("%d года и %d мес€ца", years, months);
			break;
		default:
			printf("%d года и %d мес€цев", years, months);
			break;
		}
		break;
	case 5:
		switch (months)
		{
		case 0:
			printf("5 лет");
			break;
		default:
			printf("¬ведите допустимое значение (от 1 до 60)");
			break;
		}
		break;
	default:
		printf("¬ведите допустимое значение (от 1 до 60)");
		break;
	}
}