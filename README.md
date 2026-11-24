<h1>Домашнее задание по теме 11. Работа с массивами</>

<h2>Задача - Выполнить произведение элементов массива между первыми двумя его нулевыми элементами.</h2>

<h2>Блок-схемы:</h2>
<h3>Функция between_zeros(float a[N)</h3>
<img width="428" height="930" alt="between_zeros()" src="https://github.com/user-attachments/assets/e200a4ed-1907-492a-b707-54fca7f94a33" />
<h3>Функция main()</h3>
<img width="363" height="650" alt="main()" src="https://github.com/user-attachments/assets/1605272d-a4b4-4741-93a9-96f984f5572e" />

<h2>Код:</h2>

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

#define N 5

float between_zeros(float a[N]) {
	int start = 0, end = 0, att = 0, diff = 0;
	float result = 1;

	for (int i = 0; i < N; i++) {
		if (a[i] == 0 && att == 0) {
			start = i + 1;
			att += 1;
		}
		else if (a[i] == 0 && att == 1) {
			end = i;
			att += 1;
		}
	}

	diff = end - start;

	if (start == 0) {
		printf("\nНе введенно ни одного нуля.");
		result = 0;
	}
	else if (end == 0) {
		printf("\nВведён только один ноль.");
		result = 0;
	}
	else if (diff == 0) {
		printf("\nМежду нулями нет элементов.");
		result = 0;
	}
	else {
		for (int i = start; i < end; i++) {
			result *= a[i];
		}
	}

	return result;
}

int main() {
	setlocale(LC_CTYPE, "RUS");

	float arr[N], res;

	for (int i = 0; i < N; i++) {
		printf("Введите значение для arr[%d] -> ", i);
		scanf("%f", &arr[i]);
	}

	res = between_zeros(arr);

	if (res != 0)
		printf("\nРезультат -> %f", res);

	return 0;
}
```
