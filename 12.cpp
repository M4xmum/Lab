#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

int main() {
	srand(time(NULL));
	int mas[10];
	int max, min;
	int k;
	for (int i = 0; i < 10; i++) {
		mas[i] = rand() % 100 - 50;
	}

	max = mas[0];
	min = mas[0];
	for (int i = 0; i < 10; i++) {
		if (max < mas[i]) {
			max = mas[i];
		}
		if (min > mas[i]) {
			min = mas[i];
		}
		printf("Mas :%d\n", mas[i]);

	}
	printf("Max:%d  Min:%d", max, min);
	k = max - min;
	printf("\nAnswer:%d", k);
	_getch();

}