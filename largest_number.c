#include<stdio.h>
 
  void main(){
  	
  	int NUM1;
  	int NUM2;
  	int NUM3;
  	
printf(" Give me a number :");
scanf("%d",&NUM1);

printf(" Give me a nother one :");
scanf("%d",&NUM2);
  	
printf(" Give me a third one :");
scanf("%d",&NUM3);
  	
  	
  	if(NUM1>NUM2){
  		if(NUM1>NUM3)
  		{
  			printf(" The number 1 is the largest");
		}else
		{
			printf(" The number 3 is the largest");	
		}
	  }else{
	  	if(NUM2>NUM3){
  			
			printf("The number 2 is the largest");
		  
		  }else{
		  	printf("The number 3 is the largest");
		  }
	  }

}


  
