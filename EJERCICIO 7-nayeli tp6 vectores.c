#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int t=0,f=100,i=0,ultimo=0,aux=0,j=1,posi,tiempo[10],tiem=100;
	
	
	
	
	for(i=0;i<10;i++){
		
	printf("jugador %d escriba el tiempo:\n",j);	
	scanf("%d",&tiempo[i]);	
	
	if(tiempo[i]<tiem){
	tiem=tiempo[i];
	}
	if(tiempo[i]>ultimo){
		ultimo=tiempo[i];
	}

	j++;
	}
 
	
	for(i=0;i<10;i++){
		if(tiempo[i]==tiem){
		posi=i+1;
		printf("el primer puesto es para el jugador:%d con el tiempo de:%d\n",posi,tiem);	
		}
		if(tiempo[i]<f && tiempo[i]>tiem){
		f=tiempo[i];		
		}
	}
	
	for(i=0;i<10;i++){
		if(tiempo[i]==f){
		aux=i+1;
		printf("el segundo puesto es para el jugador:%d con el tiempo de:%d\n",aux,f);		
		}	
	}
	
	for(i=0;i<10;i++){
		if(tiempo[i]==ultimo){
		aux=i+1;
		printf("el ultimo puesto es para el jugador:%d con el tiempo de:%d\n",aux,ultimo);		
		}
	}
	
	
	
	
	
	return 0;
}

