#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mayu_minu(char *palabra);

int main (){
	char palabra[100];
	printf("escriba la plabra a invertir=\n ");
	gets(palabra);
	mayu_minu(palabra);
	
	
	return 0;
}
	
	void mayu_minu(char *palabra){
		
		int  invertir='a'-'A',k=0,invertir2='A'-'a';
		
		while (palabra[k]){
			
			if (palabra[k]>='a' && palabra[k]<='z')
				
				palabra[k]=palabra[k]-invertir;
			else
				if (palabra[k]>='A' && palabra[k]<='Z')
					palabra[k]=palabra[k]-invertir2;
			
			k++;
		}
		printf("la frase invirtiendo las mayusculas o las minisculas es:\n %s",palabra);
	}
