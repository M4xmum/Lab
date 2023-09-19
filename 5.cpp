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
		printf("¬ведите фамилию студента є%d\n", i + 1);
		scanf("%20s", stud[i].famil);
	}
	for (i = 0; i < 3; i++) {
		printf("¬ведите им€ студента є%d\n", i + 1);
		scanf("%20s", stud[i].name);
	}
	for (i = 0; i < 3; i++) {
		printf("¬ведите факультет студента %s %s\n", stud[i].famil, stud[i].name);
		scanf("%20s", stud[i].facult);
	}
	for (i = 0; i < 3; i++) {
		printf("¬ведите номер зачЄтной книжки студента %s %s\n", stud[i].famil, stud[i].name);
		scanf("%d", &stud[i].Nomzach);
	}
	for (i = 0; i < 3; i++) {
		printf("студент %s %s обучаетс€ на факультете %s, номер зачЄтной книжки %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
	}
	char fam[20], im[20], facul[20];
	int zach = 0, d = 0, k = 0, k1 = 0;
	do {
		printf("1:по фвмилии\n2:по имени\n3:по факультету\n0:все\n");
		printf("¬ведите номер параметра:\n");
		scanf("%d", &k);
		switch (k) {
		case 1:
			printf("¬ведите фамилию:");
			scanf("%s", fam);
			break;
		case 2:
			printf("¬ведите им€:");
			scanf("%s", im);
			break;
		case 3:
			printf("¬ведите факультет:");
			scanf("%s", facul);
			break;

		}
		printf("Ќужны ли еще параметры? 0: нет 1:да\n");
		scanf("%d", &k1);
		if (k1 == 0) {
			break;
		}
	} while (1);

	for (int i = 0; i < 3; i++) {
		if ((zach == stud[i].Nomzach) || (strcmp(fam, stud[i].famil) == 0) || (strcmp(im, stud[i].name) == 0) || (strcmp(facul, stud[i].facult) == 0)) {
			printf("студент %s %s обучаетс€ на факультете %s, номер зачЄтной книжки %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
		}
		else
			d += 1;
	}
	if (d == 3) {
		printf("–езультаты поиска ничего не дали");
	}
	_getch();

}
