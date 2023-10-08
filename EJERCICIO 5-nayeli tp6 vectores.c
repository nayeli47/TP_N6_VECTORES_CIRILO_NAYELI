#include <stdio.h>
#include <stdlib.h>




void hu(int cont2,int i,int j,int cont3, int*numi,int*nump){
	
	if(cont2>=1){
		printf("los numeros pares son:\n");	
		
		for(i=1;i<=cont2;i++){
			
			printf("%d\n",nump[i]);	
			
		}
	}else{
		
		
		printf("no hay numeros pares\n");		
		
		
	}
	
	
	if(cont3>=1){
		printf("los numeros impares son:\n");	
		
		for(j=1;j<=cont3;j++){
			
			printf("%d\n",numi[j]);	
			
		}
	}else{
		
		
		printf("no hay numeros impares\n");		
		
		
	}	
}





int main(int argc, char *argv[]) {
int i=0,j=0,num, nump[20],numi[20],cont3=0,cont2=0;
float 	h;

	
	do{
	printf("numero  \n");	
	scanf("%d",&num);	
	
	if(num==0){
		break;	
	}
	h=num%2;
	
	if(h==0){
		i++;
		cont2++;	
		nump[i]=num;		
	}else{
		j++;
		cont3++;
		numi[j]=num;
	}
	}while(num<=19);

	
	
	hu(cont2,i,j,cont3,numi,nump);
	
	
	
	
	return 0;
}

