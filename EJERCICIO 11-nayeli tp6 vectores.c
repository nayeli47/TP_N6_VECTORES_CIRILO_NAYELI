#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Invertido (char*frase, int i, int h, int u);

int main(int argc, char *argv[]) 
{
	char frase[40];
	
	int i=0,h=0,u=0;
	
	printf("Ingrese la frase a cambiar\n");
	gets(frase);
	printf("\n");
	printf("lo ingresado es:\n*%s\n",frase);
	u=strlen(frase);
	h=u/2;
	Invertido(frase, i, h, u);
	
	
	
	return 0;
}
void Invertido (char*frase, int i, int h, int u)
{
	
	int f=0;
	for(i=0;i<h;i++)
	{
		f=frase[i];
		frase[i]=frase[u-i-1];
		frase[u-i-1]=f;
		
	}
	printf("\nfrase invertida:\n*%s\n",frase);
	
	
}
