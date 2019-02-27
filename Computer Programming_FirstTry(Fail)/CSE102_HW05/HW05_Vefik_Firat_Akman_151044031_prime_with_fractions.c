#include <stdio.h>
int main(){
   int flag_var, i, j;
   int a= 0;
 
	for(i=1; i<1000; ++i){
	flag_var=0;
		for(j=2; j<=i/2; ++j){
 			if(i%j==0){
            	flag_var=1;
            	break;
         	}
      	}
		if(flag_var==0){
			printf("%d\t",i);
			++a;
			if(a%8==0){
				printf("\n");
			}
		}
		
	}
  return 0;
}
