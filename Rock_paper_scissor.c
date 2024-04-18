#include<stdio.h>
#include<stdlib.h>
    
    void main(){
        	
    int usermove , compmove;
	int userscore;
    int compscore;
    int round = 0;
 
 userscore = 0;
 compscore = 0;
   
	while (usermove != 9){	
	
	if(round % 3 == 0 && round != 0)
	{
		printf("\nif you want to continue press 5 else press 9 \n");
		scanf("%d",&usermove);
		if(usermove == 9)
		{
			printf("Game exited\n");
			printf("userscore egalt %d\n",userscore);
			printf("compscore egalt %d\n",compscore);
			exit(1);
		}
	}
	
	printf("\nround %d\n",round);
	printf("\n entre your move :\t 0 for rock\t 1 for paper \t 2 scissor \t 9 to exit :  ");
	
	scanf("%d",&usermove);
	
	compmove = rand() % 3;  // 0,1,2
	 
		
	 if (usermove == 0 && compmove ==1){
	 	printf("\n the might computer has bested you! \t paper beats rock ");
		compscore++;  	
	 }
	 else if (usermove == 0 && compmove ==2){
	 	printf("\n You have defeated the computer \t rock beats scissor ");
	 	userscore++;
	 } 
	 else if (usermove == 1 && compmove ==0){
	 	printf("\n You have defeated the computer \t paper beats rock "); 
	 	userscore++;
	 }
	 else if (usermove == 1 && compmove ==2){
	 	printf("\n the might computer has bested you! \t scissor beats paper "); 
	 	compscore++; 
	 }
	 else if (usermove == 2 && compmove ==0){
	 	printf("\n the might computer has beated you! \t rocks beats scissor "); 
	 	compscore++; 
	 }
	 else if (usermove == 2 && compmove ==1){
	 	printf("\n  you have defeated the computer \t scissor beats paper "); 
	 	userscore++;
	 }
	 else if (usermove == 0 && compmove == 0 || usermove == 1 && compmove == 1 || usermove == 2 && compmove == 2) {
	 	printf("Shooot, it's a draw ");
	 } else if(usermove != 0 && usermove != 1 && usermove != 2&& usermove != 9) {
	 	printf("wrong input");
	 }
	round++;
	} 
        
	printf("Game exited\n");
	printf("userscore egalt %d\n",userscore);
	printf("compscore egalt %d\n",compscore);
   	
}

