#include<stdio.h>

int calcSum(int a,int b)
{
 	int Sum=a+b; 
 	return Sum;
	
}

void main(){
   	
 int a;
 int b;
   
printf("plaese give me a number: ",a);
scanf("%d",&a);

printf(" give another number: ",b);
scanf("%d",&b);
 
 int Sum=calcSum(a,b); 
   	
printf(" A+B =%d",Sum);   	



   	
   }
