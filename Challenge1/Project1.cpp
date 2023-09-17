#include <stdio.h>
#include <stdlib.h>




int main() {
	int Num, i, M;
	printf("Veuillez saisir un nombre ? \n");
	scanf("%d", &Num);
	for(i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d\n", Num, i, Num * i );
	}
	
	
	return 0;
}
