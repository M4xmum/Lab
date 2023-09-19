#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> 
#include <conio.h>

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int mas[10][10];
	int sum = 0;
	printf("Массив:\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			mas[i][j] = rand() % 100 - 50;
			printf("%d\t", mas[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			sum += mas[i][j];
		}

		printf("\nСумма чисел в строке %d:\n", i + 1);
		printf("%d", sum);
		sum = 0;
	}
	_getch();

}