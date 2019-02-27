#include <stdio.h> 
#define PI 3.14

 
int part1(void);
double sine(int degree, int n);

int main(){

    part1();

	return 0;

}

int part1(){
 
	int degree, n; 
	
	printf("Please enter the angle: ");
	scanf("%d", &degree); 
	

	printf("Please enter the precision: ");
	scanf("%d", &n); 
	
	
	printf("sin(%d) where n is %d = %.4f\n", degree, n, sine(degree, n));
	printf("\n");



}

double sine(int degree, int n){

	int tempSin; 
	double sin; 
	double holder; 
	int i; 
	
	if(degree >= 360){
		tempSin = degree / 360; 
		degree -= (tempSin*360); 
	}
	sin = degree*PI/180; 
	holder = degree*PI/180; 
	for(i=2;i<=(2*n+1);i+=2){
		holder *= ((-1) * (degree*degree*PI*PI)/(180*180) / (i*i + i)); 
		sin += holder; 
	}


	return sin; 

}

/* PART 2 PART 2 PART 2 PART2 */
/*
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void getInputs(char* arr);
char* derivative(char* arr);

int main(){
	
	int numOfElements;
	char* element;
	char** storage;
	int i;
	
	printf("Number of the elements: ");
	scanf("%d", &numOfElements);
	
	for(i=0; i<numOfElements; ++i){
		getInputs(element);

		//*storage[i]=derivative(element);
	}

	return 0;
}

void getInputs(char* arr){
	int i = 0;
	char c;

	printf("Entry: ");
	do{
		scanf("%c", &c);
		
	}while(c!='\n');
	do{
		scanf("%c", &c);
		if(c!=' ' && c!='\n') arr[i] = c;
		i++;
		printf("%c",c);
	}while(c!='\n');
	return;
}
*/

