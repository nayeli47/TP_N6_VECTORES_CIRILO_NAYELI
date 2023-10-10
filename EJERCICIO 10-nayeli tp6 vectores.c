#include <stdio.h>

void ingresarNumeros(int vector[], int n) {
	for (int i = 0; i < n; i++) {
		do {
			printf("Ingrese el número %d: ", i + 1);
			scanf("%d", &vector[i]);
		} while (vector[i] == 0);
	}
}

void mostrarVector(int vector[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", vector[i]);
	}
	printf("\n");
}
void ordenarDecreciente(int vector[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (vector[i] < vector[j]) {
				int temp = vector[i];
				vector[i] = vector[j];
				vector[j] = temp;
			}
		}
	}
}


void ordenarCreciente(int vector[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (vector[i] > vector[j]) {
				int temp = vector[i];
				vector[i] = vector[j];
				vector[j] = temp;
			}
		}
	}
}

int main() {
	int n = 8; 
	int numeros[n];
	
	printf("Ingrese 8 números enteros distintos de cero:\n");
	ingresarNumeros(numeros, n);
	
	printf("El vector ingresado es: ");
	mostrarVector(numeros, n);
	
	int positivos[n];
	int negativos[n];
	int cantPositivos = 0;
	int cantNegativos = 0;
	
	
	for (int i = 0; i < n; i++) {
		if (numeros[i] > 0) {
			positivos[cantPositivos] = numeros[i];
			cantPositivos++;
		} else {
			negativos[cantNegativos] = numeros[i];
			cantNegativos++;
		}
	}
	
	
	ordenarDecreciente(positivos, cantPositivos);
	
	ordenarCreciente(negativos, cantNegativos);
	
	printf("Números positivos en forma decreciente: ");
	mostrarVector(positivos, cantPositivos);
	
	printf("Números negativos en forma creciente: ");
	mostrarVector(negativos, cantNegativos);
	
	return 0;
}
