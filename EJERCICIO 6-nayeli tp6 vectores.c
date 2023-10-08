#include <stdio.h>
#include <stdlib.h>

 void u(int*n, int i, int max,int min);

int main()
{
	int n[10];
	int max=0, min=0,i,k=1;
	
	for (i = 0; i < 10; i++) 
	{
		printf("Ingrese el numero %d:\n",k);
		scanf("%d", &n[i]);
		k++;
	}
	max=n[0];
	min=n[0];
	
	u(n, i, max,min);
	
	return 0;
}

void u(int*n, int i, int max,int min)
{
	int  c2=0,c1=0;
	
	for(i=0;i<10;i++)
	{
		
		if(n[i]>max)
		{
			max=n[i];
			c1=1;
		}
		else
		{
			if(n[i]==max)
			{
				c1=c1+1;
			}
		}
		
		if(n[i]<min)
		{
			min=n[i];
			c2=1;
		}
		else
		{
			if(n[i]==min)
			{
				c2=c2+1;
			}
		}
		
		
	}
	printf("El valor minimo es: %d y el numero de ocurrencias es %d veces.\n", min, c2);
	printf("El valor maximo es: %d y el numero de ocurrencias es: %d veces.\n", max, c1);
}
