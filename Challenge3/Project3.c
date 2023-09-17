#include <stdio.h>
#include <stdlib.h>


int main() {
	int Num, i, j;
	j = 0;
	printf("Veuillez entrer un nombre ? \n");
	scanf("%d", &Num);
	if (Num == 0 || Num == 1)
	{
		printf("Ce n'est pas un nombre premier \n");
	}
	for (i = 2; i <=Num/2; i++)
	{
		if (Num % i == 0)
		{
	         	j+=1;	
		}
		
	}
	
	if (j>0)
	{
		printf("Ce n'est pas un nombre premier \n");
	}
	else {
		printf("C'est un nombre premier \n ");
	}
	return 0;
}
