#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> 
#include <conio.h>

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int k = 0;
	printf("Введите количество элементов массива:");
	scanf_s("%d", &k);
	int* mas = (int*)calloc(k, sizeof(int));
	for (int i = 0; i < k; i++) {
		mas[i] = rand() % 100 - 50;
	}
	printf("Массив:\n");
	for (int i = 0; i < k; i++)
		printf("%d\t", mas[i]);
	_getch();

}