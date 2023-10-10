#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ContarVocal(char* palabra, int l, char vocal) {
	int cont = 0;
	for (int i = 0; i < l; i++) {
		if (palabra[i] == vocal || palabra[i] == vocal - 32) {
			cont++;
		}
	}
	return cont;
}

int main(int argc, char* argv[]) {
	char palabra[30];
	int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;
	
	int G = 0, l;
	printf("Ingrese un texto o una palabra\n");
	gets(palabra);
	G = strlen(palabra);
	l = G;
	
	contA = ContarVocal(palabra, l, 'a');
	contE = ContarVocal(palabra, l, 'e');
	contI = ContarVocal(palabra, l, 'i');
	contO = ContarVocal(palabra, l, 'o');
	contU = ContarVocal(palabra, l, 'u');
	
	
	printf("la vocal a se repetio %d veces\n", contA);
	printf("la vocal e se repetio %d veces\n", contE);
	printf("la vocal i se repetio %d veces\n", contI);
	printf("la vocal o se repetio %d veces\n", contO);
	printf("la vocal u se repetio %d veces\n", contU);
	return 0;
}
