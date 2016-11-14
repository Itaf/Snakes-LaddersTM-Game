/* 
*Programmer: Itaf Joudeh		Date Completed: Janyary 20,2013 
*Instructor: Cheryl Schramm		Class: SYSC 2006-C
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	char L_S[100] = {0,0,0,22,0,0,0,0,21,0,
		       	0,0,43,0,0,0,0,0,19,0,
		       	0,0,-17,0,0,0,0,0,0,0,
		       	0,0,0,0,0,0,22,0,0,0,
		       	0,0,0,0,0,0,0,21,0,-23,
		       	0,0,0,-30,0,0,0,0,0,23,
		       	0,0,0,0,-25,0,0,0,0,0,
		       	0,0,16,0,0,0,19,0,0,0,
		       	-23,0,0,0,0,0,0,0,0,0,
		       	0,0,0,-24,0,0,0,-31,0,0}; 
	int comPlayer = 0;
	int roll = 0;
	int roll2 = 0;
	int i = 0;
	
	srand(time(0));

	while(comPlayer<100)
	{
		roll = 1 + (rand() % 6);
		roll2 = 1 + (rand() % 6);

		comPlayer = comPlayer + roll + roll2;

		if(comPlayer == 4)
		{
			comPlayer = comPlayer + L_S[3];
		}
		
		if(comPlayer == 9)
		{
			comPlayer = comPlayer + L_S[8];
		}
		
		if(comPlayer == 13)
		{
			comPlayer = comPlayer + L_S[12];
		}
		
		if(comPlayer == 19)
		{
			comPlayer = comPlayer + L_S[18];
		}
		
		if(comPlayer == 23)
		{
			comPlayer = comPlayer + L_S[22];
		}
		
		if(comPlayer == 37)
		{
			comPlayer = comPlayer + L_S[36];
		}
		
		if(comPlayer == 48)
		{
			comPlayer = comPlayer + L_S[47];
		}
		
		if(comPlayer == 50)
		{
			comPlayer = comPlayer + L_S[49];
		}
		
		if(comPlayer == 54)
		{
			comPlayer = comPlayer + L_S[53];
		}
		
		if(comPlayer == 60)
		{
			comPlayer = comPlayer + L_S[59];
		}
		
		if(comPlayer == 65)
		{
			comPlayer=comPlayer+L_S[64];
		}
		
		if(comPlayer == 73)
		{
			comPlayer = comPlayer + L_S[72];
		} 
		
		if(comPlayer == 77)
		{
			comPlayer = comPlayer + L_S[76];
		}
		
		if(comPlayer == 81)
		{
			comPlayer = comPlayer + L_S[80];
		}
		
		if(comPlayer == 94)
		{
			comPlayer = comPlayer + L_S[93];
		}
		
		if(comPlayer == 98)
		{
			comPlayer = comPlayer + L_S[97];
		}
			
		printf("You are on square %d.\n", comPlayer);
		i++;
	}
		
	printf("Congratulations. You won, on %d moves.\n", i);
	return 0;
}
