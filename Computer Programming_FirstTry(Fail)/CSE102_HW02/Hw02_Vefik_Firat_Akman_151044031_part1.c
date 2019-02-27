#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Vefik Fİrat Akman 151044031 Hw02 Part1*/
/* This proggram can print triange,rectangle and circle */

/* Start of Prototype */
void Draw_Triangle(int starting_point, int length, int layer_type);
void Draw_Rectangle(int starting_point, int length, int width, int layer_type);
void Draw_Circle(int center, int radius, int layer_type);
/* End of Prototype */

/* Start of Main*/
int main(){

	int select;
	int start;
	int length;
	int width;
	int radius;
	int layer;
	printf("Please Enter Select: \n");
		scanf("%d",&select);
	if(select == 1){
	
		printf("Please Enter Starting Point Of Triangle: \n");
		scanf("%d",&start);
		printf("Please Enter Length Of Triangle: \n");
		scanf("%d",&length);
		printf("Please Enter Layer Type Of Triangle: \n");
		scanf("%d",&layer);
		Draw_Triangle(start,length,layer);
	}
	
	else if(select == 2){
		
		printf("Please Enter Starting Point Of Rectangle: \n");
		scanf("%d",&start);
		printf("Please Enter Length Of Rectangle: \n");
		scanf("%d",&length);
		printf("Please Enter Width Of Rectangle: \n");
		scanf("%d",&width);
		printf("Please Enter Layer Type Of Rectangle: \n");
		scanf("%d",&layer);
		Draw_Rectangle(start,length,width,layer);
	
	}
	
	else if(select == 3){
		
		printf("Please Enter Location Of Center Circle: \n");
		scanf("%d",&start);
		printf("Please Enter Radius Of Circle: \n");
		scanf("%d",&radius);
		printf("Please Enter Layer Type Of Circle: \n");
		scanf("%d",&layer);
		Draw_Circle(start,radius,layer);
		
	}
	
	else{
		printf("Wrong Entry\n");
	}
	return 0;
	
}
/* End of Main*/


/* Start of Triangle Function */
void Draw_Triangle(int starting_point, int length, int layer_type){

	int x;
	int y;
	int i;
	int d;
	int a;	
	
	if(layer_type==1){
		for(y=1; y<=length; y++){
		
			for(a=1; a<=starting_point;++a){
				printf(" ");
			}
			
			for(i=0; i<length-y; ++i){ 
				printf(" ");
			} 
			for(x=0; x<length; x++){
				if(x==0){
					printf("*");
				}
				else if(y == length && x==0){
					for(i = 0; i<length; i++){
						printf("* "); 
					}
				}
			}

			if (y!=length){
				for(d=0; d<2*y-3; d++){
					printf(" ");
				}
			}

			else{
				for(d=0; d<length-2; d++){ 
					printf(" *");
				}
				printf(" ");
			}
	
			if(y!=1){
				printf("*\n");
				}
		
			else{
				printf("\n");
				}
		}
	}

		if(layer_type==2){
		for(y=1; y<=length; y++){
		
			for(a=1; a<=starting_point;++a){
				printf(" ");
			}
			
			for(i=0; i<length-y; ++i){ 
				printf("  ");
			} 
			for(x=0; x<length; x++){
				if(x==0){
					printf("**");
				}
				else if(y == length && x==0){
					for(i = 0; i<length; i++){
						printf("**  "); 
					}
				}
			}

			if (y!=length){
				for(d=0; d<2*y-3; d++){
					printf("  ");
				}
			}

			else{
				for(d=0; d<length-2; d++){ 
					printf("  **");
				}
				printf("  ");
			}
	
			if(y!=1){
				printf("**\n");
				}
		
			else{
				printf("\n");
				}
		}
	}
}
/* End of Triangle Function */	



/* Start of Rectangle Function */	
void Draw_Rectangle(int starting_point, int length, int width, int layer_type){

	int i;
	int j;
	int a;



	if(layer_type==1){
		for (i=1 ; i <= length ; i++){
			for(a=1; a<=starting_point;++a){
				printf(" ");
			}
			for (j=1 ; j <= width ; j++){
				    if (i == 1 || i == length || j == 1 || j == width){
				        printf("*");
		        	}
				    else{
				        if (i == 1+1 || i == length-1 || j == 1+1 || j == width-1){ 
				            printf(" ");                             
				        }
				        else{
				            printf(" ");
			            }
				    }
			}
			printf("\n");
		}
	}
 
	if(layer_type==2){
		for (i=1 ; i <= length ; i++){
			for(a=1; a<=starting_point;++a){
				printf(" ");
			}
			for (j=1 ; j <= width ; j++){
				if (i == 1 || i == length || j == 1 || j == width){
					printf("*");
				}
				else{
					if (i == 1+1 || i == length-1 || j == 1+1 || j == width-1){ 
						printf("*");                               
					}
					else{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	}

}
/* End of Rectangle Function */

/* Start of Circle Function */
void Draw_Circle(int center, int radius, int layer_type){


	int i;
	int a;
	int j;
	
	if(layer_type==1){
		for (i=0; i<=2*radius; i++){
			for(a=1; a<=center;++a){
				printf(" ");
			}
			for (j=0; j<=2*radius; j++){
		
				double distance = sqrt((double)(i-radius)*(i-radius) + (j-radius)*(j-radius));
		
				if (distance>radius-0.5 && distance<radius+0.5){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
				printf("\n");
		}
	}
	if(layer_type==2){
		for (i=0; i<=2*radius; i++){
			for(a=1; a<=center;++a){
				printf(" ");
			}
			for (j=0; j<=2*radius; j++){
		
				double distance = sqrt((double)(i-radius)*(i-radius) + (j-radius)*(j-radius));
		
				if (distance>radius-0.5 && distance<radius+0.5){
					printf("**");
				}
				else{
					printf("  ");
				}
			}
				printf("\n");
		}
	}
}

/* End of Circle Function */
		
		
/* End of Program*/
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
