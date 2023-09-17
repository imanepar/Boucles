#include <stdio.h>
#include <stdlib.h>



int main() {
	int i, j, num;
	printf("Ajouter le nombre des lignes ?\n");
	scanf("%d", &num);
	for (i = 1; i <=num; i++)
	{
	     for (j = 1; j <=num - i; j++)	
	     {
	     	printf(" ");
		 }
		 for(j = 1; j<= (2*i -1); j++)
		 {
		 	printf("*");
		 }
		 printf("\n");
	}
	     
	     
	return 0;
}
