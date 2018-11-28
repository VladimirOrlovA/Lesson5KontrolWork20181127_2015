#include<stdio.h>
#include<iostream>
#include<cmath>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");

	//Task 1.
	/*
	printf("Name		:	\"The war and the peace\" \n");
	printf("Avtor		:	L.N. Tolstoj \n");
	printf("Izdatelstvo	:	Piter \n");
	printf("Pages		:	500 \n\n");
	*/


	//Task 2.
	/*
	printf("Name	-	PP-12-1 \n");
	printf("Creator	-	student \n");
	printf("Size	-	50MB \n");
	printf("Path	-	D:\Academy\PP-12-1\n\n");
	*/

	//Task 3.
	/*
	int n;

	printf("Введите четное число N : ");
	scanf_s("%d", &n);


	if ((n%3)!=0 && (n%7)==0 )
	{
	printf("Удовлетворяет условию a \n");
	}
	else { printf("Не удовлетворяет условию а \n"); }

	if ((n % 5) == 0 && (n % 4) != 0)
	{
	printf("Удовлетворяет условию b \n");
	}
	else { printf("Не удовлетворяет условию b \n"); }

	if ((n % 8) == 0 && (n % 11) == 0)
	{
	printf("Удовлетворяет условию c \n");
	}
	else { printf("Не удовлетворяет условию c \n"); }
	*/

	//Task 4.
	/*
	float n;

	printf("Введите стоимость покупки : ");
	scanf_s("%f", &n);

	if (n > 400 && n < 600)
	{
	printf("Скидка на покупку 5 процентов %f \n", (n - (n*0.05)));
	}

	if (n > 600 && n < 1000)
	{
	printf("Скидка на покупку 10 процентов %f \n", (n - (n*0.1)));
	}
	*/

	//Task 5.

	/*float rent, prib, sebes, sebestek = 100;

	printf("Введите прибыль и себестоимость в текущем месяце: \n");
	scanf_s("%f", &prib);
	scanf_s("%f", &sebes);

	if (sebes <= (sebestek - (sebestek*0.05)))
	{
		rent = (prib / sebes) * 100;
		printf("Рентабельность работы предприятия за месяц %f процента \n\n", rent);
	}
	else { printf("Рентабельность работы предприятия не расчитывается,\nт.к. снижение себестоимсоти менее 5 процентов \n\n"); }
	*/

	// Task 6.

	float sec = 43260, m;
	int h;
	h = sec / 3600;
	m = ((sec/60) - h*60);

	printf("%d : %f \n\n", h, m);

	system("pause");
}