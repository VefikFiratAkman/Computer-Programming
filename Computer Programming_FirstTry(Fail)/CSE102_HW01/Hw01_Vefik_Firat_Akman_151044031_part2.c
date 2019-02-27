#include <stdio.h>
#include <stdlib.h>

/*Vefik Fİrat Akman 151044031 Hw01 Part1*/
/*This program is basic calculator */

/* Start of Main*/

int main() {

	/* Start of Expressions */

	double total = 0; 
	int firstValue;
	int secondValue;
	char operation;

	/* End of Expressions */

	scanf("%d", &firstValue); 
	scanf(" %c", &operation);
	total = firstValue;
	 
	 /* Start of Loop */
	 
	while(operation != '='){
		scanf("%d", &secondValue);
		
		if(operation == '+'){
			total += secondValue;
			}
		else if(operation == '-'){
			total -= secondValue;
			}
		else if(operation == '/'){
			total /= secondValue;
			} 
		else if(operation == '*'){ 
			total *= secondValue;
			}
			
		scanf(" %c", &operation); 
	}
	
	/* End of Loop */
	
	printf("%.2f \n", total);
return 0;
}

/* End of Main*/
