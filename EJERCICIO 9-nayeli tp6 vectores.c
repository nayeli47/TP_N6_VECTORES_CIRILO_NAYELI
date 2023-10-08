#include <stdio.h>
#include <stdlib.h>

void descendente(int *num){
	int j,k,aux2=0,aux,ti,h=0;
	
	for(j=1;j<=8;j++){
	for(k=1;k<=8;k++){
		if(k>h){
			if(num[k]>=aux2){
			aux2=num[k];
			aux=k;
				}
			}
		}
		ti=num[j];
		num[j]=num[aux];
		num[aux]=ti;
		aux2=0;
		h++;
	}
	printf("Vector ordenado:\n");
	for(j=1;j<=8;j++){
		
			printf("*%d\n",num[j]);
	
	}
}

int main() {
	int num[10],i;
	
	for(i=1;i<=8;i++){
		
		printf("Ingrese un numero: ");
		scanf("%d",&num[i]);
		
		if(num[i]<=0){
			printf("Ingrese otro numero: ");
			scanf("%d",&num[i]);
		}
	}
	printf("Vector desordenado:\n");
	for(i=1;i<=8;i++){
		printf("*%d\n",num[i]);
		}
	printf("\n");
	descendente(num);
	return 0;
}

