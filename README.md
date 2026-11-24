<h1>Домашнее задание по теме 11. Работа с массивами</>

<h2>Задача - Выполнить произведение элементов массива между первыми двумя его нулевыми элементами.</h2>

<h2>Блок-схемы:</h2>
<h3>Функция between_zeros(float a[N)</h3>
<img width="610" height="1230" alt="between_zeros()" src="https://github.com/user-attachments/assets/9b264778-9002-4c8b-8f02-2d50137fb17a" />
<h3>Функция main()</h3>
<img width="73" height="130" alt="main()" src="https://github.com/user-attachments/assets/5f5054dd-fa25-4b09-a4bc-aa2adf4a21f3" />

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
