#include<stdio.h>

int calcP(int l)
{
	int perimetre = l*4;
	return perimetre;
}

int calcA(int l)
{
	
	int a = l*l;
	return a;
}

void affichage(int area , int perimetre)
{
 printf("the area egalt:\n") ;
 printf("%d\n",area);
 printf("so the perimetre egalt:\n");
 printf("%d",perimetre);
 
}

void perimArea()
{
	
}
void main()
{
 int L;
 	
 printf("Give me a lenght:\n");
 scanf("%d",&L);

 int AREA=calcA(L);
 int PERIMETRE=calcP(L);
 
 affichage(AREA,PERIMETRE);
 
}
