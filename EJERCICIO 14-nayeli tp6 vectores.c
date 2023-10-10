#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float alm();

int main() {
	
		
	
	
	printf("El promedio es:\n*%.2f",alm()/3);
	
	return 0;
}

float alm(){
	float aux=0,promedio=0;
	char apellido[20];
	int l,k,nota,dif='a'-'A';
	
	
	for(k=1;k<=3;k++) {
		for(l=1;l<=6;l++){
			if (l==1) {
				printf("alumno %d\t Inserte solo su apellido:\n ",k);
				scanf("%s",&apellido);
				
				if (apellido[0]>='a' && apellido[0]<='z'){
					apellido[0]=apellido[0]-dif;
				}
			}
			else {
				printf("Inserte la %d° nota:\n",l-1);
				scanf("%d",&nota);
				promedio=nota+promedio;
			}
		}
		promedio=promedio/5;
		printf("El promedio es de %.2f del alumno %s\n",promedio,apellido);
		aux=aux+promedio;
		promedio=0;
		nota=0;
	}
	return aux;
}
	
