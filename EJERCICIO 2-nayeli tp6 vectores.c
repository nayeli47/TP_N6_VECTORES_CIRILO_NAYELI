#include <stdio.h>
#include <stdlib.h>



int main(){
	
	int i,n=0,f=0,num2,mayor=0,cont2=0,cont3,num[100];
	
	
	
	
	for(i=0;i<7;i++)
	{	
		printf("ingrese un numero\n");
		scanf("%d",&num[i]);
		
		f=num[0];
		
		if(mayor<num[i]){
			
			
			mayor=num[i];	
		}
		if(f>num[i]){
			
			
			cont3=cont3+1;	
		
		}else{	
		if(f<num[i]){
			
			
			
			cont2=cont2+1;	
			
			
		}
		}
	}
	
	
	
	
cont2=cont2+1;
	
	cont3=cont3+1;	
	
	if(cont2==7){
		
		printf("es ascendente");	
	}else{
		if(cont3==7){
			printf("es descendente");	
		}else{
			printf("los numeros fueron ingresados de manera desordenada");	
		}}
	
	   printf("el numero mas grande es:%d",mayor);	
	
	return 0;
	
	
	
}
