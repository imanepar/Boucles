#include <stdio.h>
#include <stdlib.h>


int main() {
	int num, x, y;
    printf("entrez ton nombre : ");
    scanf("%d",&num);

    x = 0;
    while(num>0){
        y = num % 10;
        x = 10 * x + y;
        num = num / 10;

    }
    printf("%d",x);
	return 0;
}
