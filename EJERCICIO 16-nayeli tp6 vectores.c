#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void validarFecha(int *anio, int *mes, int *dia) {
	while (*anio <= 0 || *anio > 2023) {
		printf("A�o no v�lido. Ingrese nuevamente: ");
		scanf("%d", anio);
	}
	
	while (*mes <= 0 || *mes > 12) {
		printf("Mes no v�lido. Ingrese nuevamente: ");
		scanf("%d", mes);
	}
	
	if (*mes == 2) {
		if ((*anio % 4 == 0 && *dia > 29) || (*anio % 4 != 0 && *dia > 28)) {
			while (*dia <= 0 || ((*anio % 4 == 0 && *dia > 29) || (*anio % 4 != 0 && *dia > 28))) {
				printf("D�a no v�lido. Ingrese nuevamente: ");
				scanf("%d", dia);
			}
		}
	} else if ((*mes == 4 || *mes == 6 || *mes == 9 || *mes == 11) && *dia > 30) {
		while (*dia <= 0 || *dia > 30) {
			printf("D�a no v�lido. Ingrese nuevamente: ");
			scanf("%d", dia);
		}
	} else if (*dia <= 0 || *dia > 31) {
		while (*dia <= 0 || *dia > 31) {
			printf("D�a no v�lido. Ingrese nuevamente: ");
			scanf("%d", dia);
		}
	}
	
	printf("Fecha v�lida.\n");
}

int main() {
	char nombre[20], empleadoMasAntiguo[20];
	int salario,s=0, antiguedad = 2023, anio, mes, dia;
	
	for (int i = 1; i <= 3; i++) {
		printf("Nombre: ");
		scanf("%s", nombre);
		
		printf("A�o de ingreso: ");
		scanf("%d", &anio);
		
		printf("Mes de ingreso: ");
		scanf("%d", &mes);
		
		printf("D�a de ingreso: ");
		scanf("%d", &dia);
		
		printf("Salario: ");
		scanf("%d", &salario);
		
		if (anio < antiguedad) {
			antiguedad = anio;
			strcpy(empleadoMasAntiguo, nombre);
			
			s=salario;
		}
		
		validarFecha(&anio, &mes, &dia);
	}
	
	printf("Empleado m�s antiguo: %s\n", empleadoMasAntiguo);
	printf("Salario del empleado m�s antiguo: %d\n",s);
	
	system("pause");
	return 0;
}
