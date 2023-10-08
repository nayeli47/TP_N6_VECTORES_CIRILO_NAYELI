#include <stdio.h>
#include <stdlib.h>



int h(int c, int*comp){
int i,co,acu=0;	


for(i=1;i<=10;i++){
	
	printf("compra numero:%d\n",i);	
	scanf("%d",&co);
	
	comp[i]=co;
	
	acu=acu+comp[i];
	
	if(comp[i]>c){
		c=comp[i];	
	}		
}	


printf("el total es:%d\n",acu);	

return c;
}

int main(int argc, char *argv[]) {
int c=0,comp[10];	


printf("el mayor gasto es de:%d$\n",h(c,comp));		
	
	
	
	
	
	return 0;
}

