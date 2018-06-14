#include<stdio.h>
#include<stdlib.h>
#include<windows.h>




void stalker();

main(){
	srand((unsigned int)time(NULL));
	
	char lab[25][35]={};
	int i,j, st1, st2;
	
	
	
	
	for(i=0;i<25;i++){		
		for(j=0;j<35;j++){	
			
						
		/*	if(i==0){
			lab[i][j]=205;
			printf("%c", lab[i][j]);
			}else if(j==1){
				printf("\n");
			}
			if(j==0 && i>1){
				if(i<24){
				lab[i][j]=186;
				printf("%c", lab[i][j]);
				}
			}
			if(i>0 && i<24){
							
				if(j>1 && j<24){
					lab[i][j]=' ';
					printf("%c", lab[i][j]);
					
				
				}
				
			}	*/		
			if(j==0)lab[i][j]=186;
			if(i==0)lab[i][j]=205;
			if(j==34 && i>0)lab[i][j]=186;
			
			if(i==24)lab[i][j]=205;
			
			
			
			
			
		}
		
	}
	
	lab[0][34]=187;
	lab[0][0]=201;
	lab[24][0]=200;
	lab[24][34]=188;
	lab[7][13]=177;
	lab[4][20]=177;
	lab[23][9]=177;
	lab[14][9]=177;
	lab[20][30]=177;
	lab[12][22]=177;
	
	
	st1 = rand() % 23;
	st2 = rand() % 32;
	lab[st1][st2] = 001;
	lab[st2][st1] = 005;
	
	while(i<100){
		system("cls");
		for(i=0;i<25;i++){
				
			for(j=0;j<35;j++){
			
				
				printf("%c",lab[i][j]);
				
			}
			printf("\n");
		}
		int m=st1;
		if(st1<24){
			st1++;
			lab[st1][st2]= 001;
			lab[st1-1][st2]= ' ';			
		}else if(lab[st1+1][st2]!=' '){
			st2--;
			lab[st1-1][st2]=001;
			lab[st1][st2+1]=' ';
			m=st2;			
		}
		
		
		
		
		sleep(1);
		
	}
	
	
	
}
void stalker(){
	
	
	
}








