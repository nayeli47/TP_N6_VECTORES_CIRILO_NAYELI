#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void validarFecha(int *anio, int *mes, int *dia) {
	while (*anio <= 0 || *anio > 2023 || *mes <= 0 || *mes > 12) {
		printf("Fecha no válida. Ingrese nuevamente (Año/Mes): ");
		scanf("%d %d", anio, mes);
	}
	
	int maxDias = 31;
	if (*mes == 4 || *mes == 6 || *mes == 9 || *mes == 11) {
		maxDias = 30;
	} else if (*mes == 2) {
		maxDias = ((*anio % 4 == 0 && *anio % 100 != 0) || *anio % 400 == 0) ? 29 : 28;
	}
	
	while (*dia <= 0 || *dia > maxDias) {
		printf("Día no válido. Ingrese nuevamente: ");
		scanf("%d", dia);
	}
	
	printf("Fecha válida.\n");
}

int calcularEdad(int anioNacimiento) {
	return 2023 - anioNacimiento;
}

int main() {
	char nombres[3][35];
	int edades[3] = {0};
	int dias[3], meses[3], anios[3];
	
	for (int i = 0; i < 3; i++) {
		printf("Ingrese el nombre de la persona %d: ", i + 1);
		scanf("%s", nombres[i]);
		
		printf("Ingrese la fecha de nacimiento (Año Mes Día): ");
		scanf("%d %d %d", &anios[i], &meses[i], &dias[i]);
		
		validarFecha(&anios[i], &meses[i], &dias[i]);
		edades[i] = calcularEdad(anios[i]);
	}
	
	int decision = 1;
	while (decision == 1) {
		printf("¿Desea modificar alguna fecha?\n");
		printf("1 = Sí\n");
		printf("2 = No\n");
		scanf("%d", &decision);
		
		if (decision == 1) {
			char nombreModificar[35];
			printf("Ingrese el nombre de la persona que desea cambiar su fecha: ");
			scanf("%s", nombreModificar);
			
			int indiceModificar = -1;
			for (int i = 0; i < 3; i++) {
				if (strcmp(nombreModificar, nombres[i]) == 0) {
					indiceModificar = i;
					break;
				}
			}
			
			if (indiceModificar != -1) {
				printf("Ingrese la nueva fecha de nacimiento (Año Mes Día): ");
				scanf("%d %d %d", &anios[indiceModificar], &meses[indiceModificar], &dias[indiceModificar]);
				validarFecha(&anios[indiceModificar], &meses[indiceModificar], &dias[indiceModificar]);
				edades[indiceModificar] = calcularEdad(anios[indiceModificar]);
			} else {
				printf("El nombre de la persona no está registrado para modificar su fecha.\n");
			}
		}
	}
	
	int mayorEdad = edades[0], segundaMayorEdad = edades[0], menorEdad = edades[0];
	
	for (int i = 0; i < 3; i++) {
		if (edades[i] > mayorEdad) {
			segundaMayorEdad = mayorEdad;
			mayorEdad = edades[i];
		} else if (edades[i] > segundaMayorEdad && edades[i] != mayorEdad) {
			segundaMayorEdad = edades[i];
		}
		if (edades[i] < menorEdad) {
			menorEdad = edades[i];
		}
	}
	
	for (int i = 0; i < 3; i++) {
		if (edades[i] == mayorEdad) {
			printf("La persona %s tiene la mayor edad y es: %d años\n", nombres[i], mayorEdad);
		}
		if (edades[i] == segundaMayorEdad) {
			printf("La persona %s tiene la segunda mayor edad y es: %d años\n", nombres[i], segundaMayorEdad);
		}
		if (edades[i] == menorEdad) {
			printf("La persona %s tiene la menor edad y es: %d años\n", nombres[i], menorEdad);
		}
	}
	
	return 0;
}
