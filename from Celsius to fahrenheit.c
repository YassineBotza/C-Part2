#include<stdio.h>

float calcF(float C)
{
	float F = (9.0/5.0 *C)+32;
	return F;
	
}

  void main(){
  	
  	float C;
  	float F;
  	
printf("please give me a temperature:");
scanf("%f",&C);
F=calcF(C);

printf("So in the Fhahrenheit:%f",F);	
  	
  }
