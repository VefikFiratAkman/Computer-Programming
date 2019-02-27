#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char * sttr;


char * sfrac_simplify(char * n);
double sfrac_todouble(char * x);
void my_reverse(char str[], int len);
char * sfrac_fromdouble(double x);
char * sfrac_add(char * n1, char * n2);
char * sfrac_sub(char * n1, char * n2);
char * sfrac_negate(char * n);
char * sfrac_mult(char * n1, char * n2);
char * sfrac_div(char * n1, char * n2);






double sfrac_todouble(char * str){
    int value, sign;
    int i = 0;
    value = 0;
	
	if(str[0] == '-')   sign = 1;
    else    sign = 0;
  	

    for(i = sign; str[i] != '/' && str[i] != '\0'; i++){
        value *= 10;
        value += str[i] - '0';
    }

    if(sign == 1)    value *= -1;
	value = round(value);
    return value;
}

char * sfrac_simplify(char * n){
	int i,k,j,y = 0;
	int c = 1;
	double sayi1,sayi2 = 0;
	char * s_sayi1[30];
	char * s_sayi2;
	char s_sayi3;

	for(i = 0;(n[i] != '/') && (n[i] != '\0') ;++i){	
	}
	y = i;
	j = i+1;
		
	sayi1 = sfrac_todouble(&n[0]);
	sayi2 =sfrac_todouble(&n[j]);
	
	
	while(c){
		if	(((sayi1/2)-(int)sayi1/2)==0 &&((sayi2/2)-(int)sayi2/2)==0){
		
			sayi1 = (sayi1/2);
			sayi2 = (sayi2/2);
				
		}
	
		else if (((sayi1/3)-(int)sayi1/3)==0 &&((sayi2/3)-(int)sayi2/3)==0){
		
			sayi1 = (sayi1/3);
			sayi2 = (sayi2/3);
			
		}
	
		else if (((sayi1/4)-(int)sayi1/4)==0 &&((sayi2/4)-(int)sayi2/4)==0){
		
			sayi1 = (sayi1/4);
			sayi2 = (sayi2/4);
			
		}
	
		else if (((sayi1/5)-(int)sayi1/5)==0 &&((sayi2/5)-(int)sayi2/5)==0){
		
			sayi1 = (sayi1/5);
			sayi2 = (sayi2/5);
			
		}
	
		else if (((sayi1/6)-(int)sayi1/6)==0 &&((sayi2/6)-(int)sayi2/6)==0){
		
			sayi1 = (sayi1/6);
			sayi2 = (sayi2/6);
			
		}
	
		else if (((sayi1/7)-(int)sayi1/7)==0 &&((sayi2/7)-(int)sayi2/7)==0){
		
			sayi1 = (sayi1/7);
			sayi2 = (sayi2/7);
			
		}
	
		else if (((sayi1/8)-(int)sayi1/8)==0 &&((sayi2/8)-(int)sayi2/8)==0){
		
			sayi1 = (sayi1/8);
			sayi2 = (sayi2/8);
			
		}
	
		else if (((sayi1/9)-(int)sayi1/9)==0 &&((sayi2/9)-(int)sayi2/9)==0){
		
			sayi1 = (sayi1/9);
			sayi2 = (sayi2/9);
			
		}
	
		else{
		c = 0;
		}
	}
	

	//	*s_sayi2=("%s",((char)(sayi1+48)));
	
	//printf("%s\n\n",s_sayi2);
	//return s_sayi2;
	
}



char * sfrac_add(char * n1, char * n2){
	int i,k,j,j2,yer1,yer2= 0;
	int c = 1;
	double sayi1a,sayi1b,sayi2a,sayi2b,sayi3a,sayi3b = 0;
	int temp;

	for(i = 0;(n1[i] != '/') && (n1[i] != '\0') ;++i){	
	}
	yer1 = i;
	j = i+1;
	for(i = 0;(n2[i] != '/') && (n2[i] != '\0') ;++i){	
	}
	yer2 = i;
	j2 = i+1;
	
	sayi1a = sfrac_todouble(&n1[0]);
	sayi1b =sfrac_todouble(&n1[j]);
	
	
	sayi2a = sfrac_todouble(&n2[0]);
	sayi2b =sfrac_todouble(&n2[j2]);	

	
	if(sayi1b==sayi2b){
	}
	else{
		temp = sayi1b;
		sayi1a = sayi1a*sayi2b;
		sayi1b = sayi1b*sayi2b;
		sayi2a = sayi2a*temp;
		sayi2b = sayi2b*temp;
	}
	

	
	sayi3a = sayi1a+sayi2a;
	sayi3b = sayi1b;
	printf("%1.2f/",sayi3a);
	printf("%1.2f\n",sayi3b);
	
}

char * sfrac_sub(char * n1, char * n2){


int i,k,j,j2,yer1,yer2= 0;
	int c = 1;
	double sayi1a,sayi1b,sayi2a,sayi2b,sayi3a,sayi3b = 0;
	int temp;

	for(i = 0;(n1[i] != '/') && (n1[i] != '\0') ;++i){	
	}
	yer1 = i;
	j = i+1;
	for(i = 0;(n2[i] != '/') && (n2[i] != '\0') ;++i){	
	}
	yer2 = i;
	j2 = i+1;
	
	sayi1a = sfrac_todouble(&n1[0]);
	sayi1b =sfrac_todouble(&n1[j]);
	
	
	
	sayi2a = sfrac_todouble(&n2[0]);
	sayi2b =sfrac_todouble(&n2[j2]);	

	if(sayi1b==sayi2b){
	}
	else{
		temp = sayi1b;
		sayi1a = sayi1a*sayi2b;
		sayi1b = sayi1b*sayi2b;
		sayi2a = sayi2a*temp;
		sayi2b = sayi2b*temp;
	}
	
	
	sayi3a = sayi1a-sayi2a;
	sayi3b = sayi1b;
	printf("%1.2f/",sayi3a);
	printf("%1.2f\n",sayi3b);
	
}


char * sfrac_negate(char * n){
int i,k,j,y = 0;
	int c = 1;
	double sayi1,sayi2 = 0;
	char s_sayi1[30];
	char s_sayi2[30];

	for(i = 0;(n[i] != '/') && (n[i] != '\0') ;++i){	
	}
	y = i;
	j = i+1;
		
	sayi1 = sfrac_todouble(&n[0]);
	sayi2 =sfrac_todouble(&n[j]);
	
	
	sayi1 = -sayi1;
	printf("%1.2f/",sayi1);
	printf("%1.2f\n",sayi2);
}



char * sfrac_mult(char * n1, char * n2){

int i,k,j,j2,yer1,yer2= 0;
	int c = 1;
	double sayi1a,sayi1b,sayi2a,sayi2b,sayi3a,sayi3b = 0;
	int temp;

	for(i = 0;(n1[i] != '/') && (n1[i] != '\0') ;++i){	
	}
	yer1 = i;
	j = i+1;
	for(i = 0;(n2[i] != '/') && (n2[i] != '\0') ;++i){	
	}
	yer2 = i;
	j2 = i+1;
	
	sayi1a = sfrac_todouble(&n1[0]);
	sayi1b =sfrac_todouble(&n1[j]);
	
	
	
	sayi2a = sfrac_todouble(&n2[0]);
	sayi2b =sfrac_todouble(&n2[j2]);	

	sayi3a = sayi1a*sayi2a;
	sayi3b = sayi1b*sayi2b;
	printf("%1.2f/",sayi3a);
	printf("%1.2f\n",sayi3b);


}

char * sfrac_div(char * n1, char * n2){

int i,k,j,j2,yer1,yer2= 0;
	int c = 1;
	double sayi1a,sayi1b,sayi2a,sayi2b,sayi3a,sayi3b = 0;
	int temp;

	for(i = 0;(n1[i] != '/') && (n1[i] != '\0') ;++i){	
	}
	yer1 = i;
	j = i+1;
	for(i = 0;(n2[i] != '/') && (n2[i] != '\0') ;++i){	
	}
	yer2 = i;
	j2 = i+1;
	
	sayi1a = sfrac_todouble(&n1[0]);
	sayi1b =sfrac_todouble(&n1[j]);

	
	
	sayi2a = sfrac_todouble(&n2[0]);
	sayi2b =sfrac_todouble(&n2[j2]);	


	sayi3a = sayi1a*sayi2b;
	sayi3b = sayi1b*sayi2a;
	printf("%1.2f/",sayi3a);
	printf("%1.2f\n",sayi3b);



}









void main(){
	char s1[20],s2[20];
	char * x;
	
	char op;
	printf("Enter The First Number: ");
	scanf("%s",s1);
	printf("Enter The Operation: ");
	scanf(" %c",&op);
	printf("Enter The Second Number: ");
	scanf("%s",s2);
	
	switch (op){
	case '+':
		sfrac_add(s1,s2);
		break;
	case '-':
		sfrac_sub(s1,s2);
		break;
	case 'n':
		sfrac_negate(s1);
		break;
	case '*':
		sfrac_mult(s1,s2);
		break;
	case ':':
		sfrac_div(s1,s2);
		break;
	default:
		break;
	
	}
}











/*

void my_reverse(char str[], int len)
{
    int start, end;
    char temp;
    for(start=0, end=len-1; start < end; start++, end--) {
        temp = *(str+start);
        *(str+start) = *(str+end);
        *(str+end) = temp;
    }
}
 
char * sfrac_fromdouble(double x){
	
	
    int i = 0;
    int isNegative = 0;
  
    /* A zero is same "0" string in all 10 */
  /*
    if (x == 0) {
        sttr[i] = '0';
        sttr[i + 1] = '\0';
        
    }
  
    /* negative numbers are only handled if 10 is 10 
       otherwise considered unsigned number */
       /*
    if (x < 0 && 10 == 10) {
        isNegative = 1;
        x = -x;
    }
  
    while (x != 0) {
        int rem = (int)x % 10;
        sttr[i++] = (rem > 9)? (rem-10) + 'A' : rem + '0';
        x = x/10;
    }
  
    /* Append negative sign for negative numbers */
   /*
    if (isNegative){
        sttr[i++] = '-';
    }
  
    sttr[i] = '\0';
 
    my_reverse(sttr, i);
}
*/












