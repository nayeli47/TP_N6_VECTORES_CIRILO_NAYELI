#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void palindromo (char*frase, int i, int x, int h,char*c);

int main(int argc, char *argv[]) 
{
	char frase[30];
	char c[30];
	int i=0,x=0,h=0;
	
	printf("Ingrese la frase a cambiar\n");
	gets(frase);
	
	printf("la frase sin cambios es:\n*%s\n",frase);
	strcpy(c,frase);
	h=strlen(frase);
	x=h/2;
	
	palindromo(frase, i,x, h,c);
	
	
	
	return 0;
}



void palindromo (char*frase, int i, int x, int h,char*c)
{
	char aux[30];
	int cam=0,j=0;
	for(i=0;i<x;i++)
	{
		if (frase[i] != ' ') 
		{
			aux[j] = frase[i];
			j++;
		}
		cam=frase[i];
		frase[i]=frase[h-i-1];
		frase[h-i-1]=cam;
		}
	
	if(strcmp(frase,c)==0){
		printf("la frase es un palindromo\n");
	}
	else{
		printf("la frase no es un palindromo\n");
	}
	
	
	
}
