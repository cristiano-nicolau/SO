#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int pot(int x, int n){
	int i, p=1;
  for(i=0; i<n;i++)
	{ p=p*x;}
 return p;
}
int main(int argc, char *argv[])
{
    int total=0;
    char op;
    int first, second;
    printf("Enter an operator (+, -, *, /,p): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%i %i", &first, &second);
  	switch (op) {
	    case '+':
		total=first+second;
		printf("%i%c%i=%i \n",first,op,second,total);
	      break;
	    case '-':
		total=first-second;
		printf("%i%c%i=%i \n",first,op,second,total);
	      break;
	    case '*':
	      	total=first*second;
	      	printf("%i%c%i=%i \n",first,op,second,total);
	      break;
	    case '/':
	      	total=first/second;
	      	printf("%i%c%i=%i \n",first,op,second,total);
	      break;
	    case 'p':
	      	  total=pot(first,second);
	          printf("%i%c%i=%i \n",first,op,second,total);	
	      break;
	    // operator doesn't match any case constant
	    default:
	      printf("Error! operator is not correct \n");
	}
    return EXIT_SUCCESS;
}
