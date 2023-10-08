#include <stdio.h>
#include <stdlib.h>

void ascendente(int *num){
	int j,k,aux=0,aux2,ti,h=0;
	for(j=1;j<=7;j++){
	for(k=1;k<=7;k++){
		if(k>h){
		if(num[k]>=aux){
			aux=num[k];
			aux2=k;
				}
			}
		}
		ti=num[j];
		num[j]=num[aux2];
		num[aux2]=ti;
		aux=0;
		h++;
	}
	printf("el vector ordenado de manera ascendente se ve así: \n");
	for(j=7;j>=1;j--){
		
			printf("*%d\n",num[j]);
	}
}

int main() {
	int num[8],i;
	for(i=1;i<=7;i++){
		printf("Ingrese un numero: ");
		scanf("%d",&num[i]);
		if(num[i]<=0){
			printf("Ingrese otro numero: ");
			scanf("%d",&num[i]);
		}
	}
	ascendente(num);
	return 0;
}
