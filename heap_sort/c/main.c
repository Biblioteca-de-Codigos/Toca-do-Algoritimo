#include <stdio.h>

void troca(int *a, int *b) {
	int x = *a;
	*a = *b;
	*b = x;
}

unsigned int heap(int *numeros, int tamanho) {
	unsigned int total = 0;
	if (tamanho > 1) {
		int i, j;
		for (i = 2; i <= tamanho; ++i) {
			for (j = i; j > 1 && numeros[j - 1] > numeros[(j >> 1) - 1]; j >>= 1) {
				troca(&numeros[j - 1], &numeros[(j >> 1) - 1]);
				++total;
			}
			++total;
		}
		troca(&numeros[0], &numeros[tamanho - 1]);
		total += heap(numeros, tamanho - 1);
	}
	return total;
}

int main(int argc, char *argv[]) {
	int numeros[10] = {1, 5, 7, 9, 2, 3, 4, 6, 8, 0};
	heap(numeros, 10);
	for (int i = 0; i < 10; ++ i) {
		printf("%d ", numeros[i]);
	}
	return 0;
}
