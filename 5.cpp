#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> 
#include <conio.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 0;
	struct student
	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;

	}stud[3];

	for (i = 0; i < 3; i++) {
		printf("������� ������� �������� �%d\n", i + 1);
		scanf("%20s", stud[i].famil);
	}
	for (i = 0; i < 3; i++) {
		printf("������� ��� �������� �%d\n", i + 1);
		scanf("%20s", stud[i].name);
	}
	for (i = 0; i < 3; i++) {
		printf("������� ��������� �������� %s %s\n", stud[i].famil, stud[i].name);
		scanf("%20s", stud[i].facult);
	}
	for (i = 0; i < 3; i++) {
		printf("������� ����� �������� ������ �������� %s %s\n", stud[i].famil, stud[i].name);
		scanf("%d", &stud[i].Nomzach);
	}
	for (i = 0; i < 3; i++) {
		printf("������� %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
	}
	char fam[20], im[20], facul[20];
	int zach = 0, d = 0, k = 0, k1 = 0;
	do {
		printf("1:�� �������\n2:�� �����\n3:�� ����������\n0:���\n");
		printf("������� ����� ���������:\n");
		scanf("%d", &k);
		switch (k) {
		case 1:
			printf("������� �������:");
			scanf("%s", fam);
			break;
		case 2:
			printf("������� ���:");
			scanf("%s", im);
			break;
		case 3:
			printf("������� ���������:");
			scanf("%s", facul);
			break;

		}
		printf("����� �� ��� ���������? 0: ��� 1:��\n");
		scanf("%d", &k1);
		if (k1 == 0) {
			break;
		}
	} while (1);

	for (int i = 0; i < 3; i++) {
		if ((zach == stud[i].Nomzach) || (strcmp(fam, stud[i].famil) == 0) || (strcmp(im, stud[i].name) == 0) || (strcmp(facul, stud[i].facult) == 0)) {
			printf("������� %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
		}
		else
			d += 1;
	}
	if (d == 3) {
		printf("���������� ������ ������ �� ����");
	}
	_getch();

}
