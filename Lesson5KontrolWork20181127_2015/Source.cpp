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

	printf("������� ������ ����� N : ");
	scanf_s("%d", &n);


	if ((n%3)!=0 && (n%7)==0 )
	{
	printf("������������� ������� a \n");
	}
	else { printf("�� ������������� ������� � \n"); }

	if ((n % 5) == 0 && (n % 4) != 0)
	{
	printf("������������� ������� b \n");
	}
	else { printf("�� ������������� ������� b \n"); }

	if ((n % 8) == 0 && (n % 11) == 0)
	{
	printf("������������� ������� c \n");
	}
	else { printf("�� ������������� ������� c \n"); }
	*/

	//Task 4.
	/*
	float n;

	printf("������� ��������� ������� : ");
	scanf_s("%f", &n);

	if (n > 400 && n < 600)
	{
	printf("������ �� ������� 5 ��������� %f \n", (n - (n*0.05)));
	}

	if (n > 600 && n < 1000)
	{
	printf("������ �� ������� 10 ��������� %f \n", (n - (n*0.1)));
	}
	*/

	//Task 5.

	/*float rent, prib, sebes, sebestek = 100;

	printf("������� ������� � ������������� � ������� ������: \n");
	scanf_s("%f", &prib);
	scanf_s("%f", &sebes);

	if (sebes <= (sebestek - (sebestek*0.05)))
	{
		rent = (prib / sebes) * 100;
		printf("�������������� ������ ����������� �� ����� %f �������� \n\n", rent);
	}
	else { printf("�������������� ������ ����������� �� �������������,\n�.�. �������� ������������� ����� 5 ��������� \n\n"); }
	*/

	// Task 6.

	float sec = 43260, m;
	int h;
	h = sec / 3600;
	m = ((sec/60) - h*60);

	printf("%d : %f \n\n", h, m);

	system("pause");
}