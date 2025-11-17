# Домашнее задание к работе 7 #
## Условие задачи ##
Написать программу, которая для заданного возраста в месяцах (от 1 до 60) выводит текстовое сообщение, отображающее возраст в годах и месяцах с правильным склонением.
## 1. Алгоритм блок-схема ##
### Алгоритм ###
1. Начало
2. Инициализируем переменные ```years```, ```months```.
3. Пригласить к вводу значения переменной ```months```.
4. Присваиваем переменным значения:
    * ```years``` = ```months``` / 12
    * ```months``` %= 12
5. Выполняем проверку условий. Из-за большого количества условий, используем оператор ```switch``` для удобства.
6. После проверок выводим ответ на экран.
7. Конец.
### Блок-схема ###
![](https://github.com/kiri4art/Lab7/blob/main/Lab7Algo.png)
## 2. Реализация программы ##
```
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int years, months;

void main()
{
	system("chcp 1251");
	puts("Введите значение:");
	scanf("%d", &months);
	years = months / 12;
	months %= 12;
	switch (years)
	{
	case 0:
		switch (months)
		{
		case 1:
			printf("%d лет и %d месяц", years, months);
			break;
		case 2:
		case 3:
		case 4:
			printf("%d лет и %d месяца", years, months);
			break;
		default:
			printf("%d лет и %d месяцев", years, months);
			break;
		}
		break;
	case 1:
		switch (months)
		{
		case 1:
			printf("%d год и %d месяц", years, months);
			break;
		case 2:
		case 3:
		case 4:
			printf("%d год и %d месяца", years, months);
			break;
		default:
			printf("%d год и %d месяцев", years, months);
			break;
		}
		break;
	case 2:
	case 3:
	case 4:
		switch (months)
		{
		case 1:
			printf("%d года и %d месяц", years, months);
			break;
		case 2:
		case 3:
		case 4:
			printf("%d года и %d месяца", years, months);
			break;
		default:
			printf("%d года и %d месяцев", years, months);
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
			printf("Введите допустимое значение (от 1 до 60)");
			break;
		}
		break;
	default:
		printf("Введите допустимое значение (от 1 до 60)");
		break;
	}
}
```
## 3. Результаты работы программы ##
![](https://github.com/kiri4art/Lab7/blob/main/Lab7Ans1.png)<br>
![](https://github.com/kiri4art/Lab7/blob/main/Lab7Ans2.png)<br>
![](https://github.com/kiri4art/Lab7/blob/main/Lab7Ans3.png)<br>
Программа успешно прошла проверку
## 4. Информация о разработчике ##
Кириченко Артем, бИПТ-252
