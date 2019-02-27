#include <stdio.h>
/*Vefik Fİrat Akman 151044031 Hw01 Part1*/
/*This program calculate average of grades. And show letter grade of 
average grade*/

/* Start of Main*/
main(){
	/* Start of Expressions */
		
	int i;
	int a;
	int grade;
	int temp;
	int ort;
	
	/* End of Expressions */
	
	temp = 0;	
	
	/* Start of Loop */
	/* Take grades from user */
	for(a = 0,i = 1;i != -1;++a){
	
		printf("Please enter the %d.grade:",(a+1));
		
		scanf("%d",&grade);
		
		if(grade == -1){
			break;
			}
		else if(grade >= 90){
			printf("%d \n A \n",grade);
			}
		else if(grade >= 80){
			printf("%d \n B \n",grade);
			}
		else if(grade >= 70){
			printf("%d \n C \n",grade);
			}
		else if(grade >= 60){
			printf("%d \n D \n",grade);
			}
		else if(grade < 60){
			printf("%d \n F \n",grade);
			}
			temp += grade;
		}
		
		/* End of Loop */
		
		ort = temp/a;
		
		/* Start of calculate average of grades */
		
		if(ort >= 90){
			printf("%d \n A \n",ort);
			}
		else if(ort >= 80){
			printf("%d \n B \n",ort);
			}
		else if(ort >= 70){
			printf("%d \n C \n",ort);
			}
		else if(ort >= 60){
			printf("%d \n D \n",ort);
			}
		else if(ort < 60){
			printf("%d \n F \n",ort);
			}
		
		/* End of calculate average of grades */
	}
	
	/* End of Main*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
