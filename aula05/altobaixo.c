#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int random=0;
	int contador=1;
	int number;
	srand(time(NULL));
	random=(rand() % 101);
	printf("Enter number: ");
    	scanf("%i", &number);
	
	do {
  		if (number > random) {
  			printf("Alto\n");
  		} else if (number< random){
  			printf("Baixo \n");
  		}
  		contador++;
  		printf("Enter number: ");
    		scanf("%i", &number);
	}
	while (number != random);
	printf("Parabens. Acertou o numero %i ao fim de %i tentativas.\n",random,contador);
	
	return EXIT_SUCCESS;
}
