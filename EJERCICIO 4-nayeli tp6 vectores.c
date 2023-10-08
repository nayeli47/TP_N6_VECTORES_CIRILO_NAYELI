#include <stdio.h>
#include <stdlib.h>	
	
	void h(int*num,int i,int*numero,int cont2){
		for(i=1;i<=8;i++){
		if(num[i]==numero[2]){
			printf("%d\n",i);
			cont2=cont2+1;	
		}	
		}
		printf("el numero %d se repite %d veces.\n",numero[2],cont2);	
	}
	
	void h2(int*num,int j,int*numero,int cont){
		
		for(j=1;j<=8;j++){
			
			if(num[j]==numero[1]){
				
				printf("%d\n",j);
				
				cont=1+cont;
				
				
			}	
			
		}
		printf("el numero %d se repite %d veces.\n",numero[1],cont);
		
	}
	
	int main(int argc, char *argv[]) {
		int i,cont2=0,c,j,cont=0,num[8],numero[2];	
		
		
		for(i=1;i<=8;i++){
		
		printf("ingrese el numero:%d\n",i);	
		scanf("%d",&c);
		
		num[i]=c;
		
		
		
	}	
	
		for(i=1;i<=2;i++){
			printf("ingrese otros dos numeros:\n");	
			printf("numero:%d\n",i);	
			scanf("%d",&numero[i]);
			
		}	
		
		
	
			
					
			printf("el numero %d se repite en las posiciones siguientes:\n",numero[1]);	
			
		h2(num,j,numero,cont);
			
		
			
				
					
				printf("el numero %d se repite en las posiciones siguientes:\n",numero[2]);	
				
				
					
					h(num,i,numero,cont2);
					
				
				
			
		
		
		
		return 0;
	}
	
