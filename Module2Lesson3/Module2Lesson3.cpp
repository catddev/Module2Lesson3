#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>


void main()

{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int v = 0;
	printf("нз:\t");
	scanf("%d", &v);

	if (v == 1)
	{
		#pragma region 1.Записать условие, которое является истинным, когда только одно из чисел X, Y и Z кратно пяти.
				int x, y, z;
				x = 1 + rand() % 1000;
				y = 1 + rand() % 1000;
				z = 1 + rand() % 1000;

				printf("%d - %d - %d\n", x, y, z);

				if (x % 5 == 0 && y % 5 != 0 && z % 5 != 0)
				{
					printf("условие выполнено\n");
				}
				else if (y % 5 == 0 && x % 5 != 0 && z % 5 != 0) {
					printf("условие выполнено\n");
				}
				else if (z % 5 == 0 && x % 5 != 0 && y % 5 != 0) {
					printf("условие выполнено");
				}
				else
				{
					printf("условие не выполнено\n");
				}
		#pragma endregion
	}
	else if (v == 2)
	{
		int x, y, z;
		x = 1 + rand() % 100;
		y = 1 + rand() % 100;
		z = 1 + rand() % 100;

		printf("%d\t %d\t %d\n", x, y, z);

		if (x > 80 || y > 80 || z > 80)
		{
printf("условие выполнено\n");
		}
		else
		{
			printf("все числа меньше 80\n");
		}

	}
	else if (v == 3)
	{
		int a = -1000 + rand() % 1000;
		printf("%d\n", a);

		if ((a<-10 && a>-1) || (a < 2 && a>15))
		{
			printf("число лежит вне заданных интервалов\n", a);
		}
		else
		{
			printf("число принадлежит одному из интервалов\n");
		}
	}
	else if (v == 4)
	{
		int a = -15000 + rand() % 15000;
		printf("%d\n", a);

		if ((a >= -9999 && a <= 9999) && a != 4999) {
			printf("число является четырехзначным и не равно 4999\n");
		}
		else {
			printf("содержит более четырех знаков либо равно 4999\n");
		}
	}
	else if (v == 5) {
		int a, b, c, d;
		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;
		c = 1 + rand() % 1000;
		d = 1 + rand() % 1000;

		printf("%d - %d - %d - %d\n", a, b, c, d);

		if (a%b != 0 && c%d != 0) {
			float x, y;
			x = a / b;
			y = c / d;
			if (x > y) {
				printf("a/b больше c/d\n");
			}
			else if (x == y) {
				printf("дроби равны\n");
			}
			else {
				printf("c/d больше a/b\n");
			}
		}
		else {
			printf("числа делятся нацело, нет двух дробей для сравнения\n");
		}
	}

	else if (v == 6) {
		int x, y;
		x = 1 + rand() % 8;
		y = 1 + rand() % 8;
		printf("координаты поля: (%d, %d)\n", x, y);

		if ((x % 2 == 0 && y % 2 != 0) || (x % 2 != 0 && y % 2 == 0)) {
			printf("Данное поле является белым\n");
		}
		else {
			printf("Данное поле является черным\n");
		}
	}

	else if (v == 7) {
		int x1, y1, x2, y2;
		x1 = 1 + rand() % 8;
		y1 = 1 + rand() % 8;
		x2 = 1 + rand() % 8;
		y2 = 1 + rand() % 8;
		printf("координаты первого поля: (%d, %d) \nкоординаты второго поля: (%d, %d)\n", x1, y1, x2, y2);

		if (x1 == x2 || y1 == y2) {
			printf("Ладья за один ход может перейти с одного поля на другое");
		}
		else {
			printf("Понадобится более 1 хода");
		}
	}

	else if (v == 8) {
		int a=1, b=0, c=0;
		a = 0 + rand() % 2;
		b = 0 + rand() % 2;
		c = 0 + rand() % 2;
		printf("a=%d b=%d c=%d\n", a, b, c);

		if (a || b && !c) {
			printf("8a. true\n");
		}
		else {
			printf("8a. false\n");
		}
		if (!a && !b) {
			printf("8b. true\n");
		}
		else {
			printf("8b. false\n");
		}
		if ((!a && !c) || b) {
			printf("8c. true\n");
		}
		else {
			printf("8c. false\n");
		}
		if (a && !b || c) {
			printf("8d. true\n");
		}
		else {
			printf("8d. false\n");
		}
		if (a|| (!b && !c)) {
			printf("8e. true\n");
		}
		else {
			printf("8e. false\n");
		}
	}

	else if (v == 9) {
		int x, y;

		if (x >= 0 && y != 4) {
		}
	}


}