#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

#define N 10

int main() {
	setlocale(LC_CTYPE, "RUS");

	float arr[N];
	float result = 0;

	for (int i = 0; i < N; i++) {
		printf("Введите значение для arr[%d] -> ", i);
		scanf("%f", &arr[i]);
	}

	return 0;
}