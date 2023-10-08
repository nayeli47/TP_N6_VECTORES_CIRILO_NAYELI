#include <stdio.h>
#include <stdlib.h>


void h(int i, int*num){

for(i=0;i<6;i++){
			
			printf("%d\n",num[i]);
			
		}
}
int main(int argc, char *argv[]) {
	
	int num [6],i,j;
	
	
	
	for(i=0;i<6;i++){
	printf("ingresa un numero\n");
	scanf("%d",&num[i]);
}
		
	h(i,num);	
		
	
	return 0;
}

