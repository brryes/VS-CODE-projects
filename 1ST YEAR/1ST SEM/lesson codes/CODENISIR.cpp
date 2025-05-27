#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <unistd.h>
// bat di nagana sakin to grr auq na
 //use for loop or while loop lang, bawal mag if
 //DEADLINE SA MONDAY

void gotoxy(short x, short y);    

 

main(){

 

int y=1,x=1;


 

	while(x<=24)           
	{ 
	   gotoxy(x,y);                      
	   printf("x");
	   usleep(10000);	
		x++; //update  x=x+1
	}

	while(y<=10)
	{        //25 1 
	   gotoxy(x,y);                      
	   printf("x");
	   usleep(10000);	
		y++;
	}

	      //25
	while(x>=1) //upright
	{        //25 11 
	   gotoxy(x,y);                      
	   printf("x");
	   usleep(10000);	
		x--;
	}

 

          //11
	while(y>=1)
	{        //1 11 
	   gotoxy(x,y);                      
	   printf("x");
	   usleep(10000);	
		y--;
	}

 

   y=2;
   while(x<=24)           // top 2
	{ 
	   gotoxy(x,y);                      
	   printf("x");
	   usleep(10000);	
		x++; //update  x=x+1
	}

   y=2;
   x=23;
   while(y<=10)           
	{ 
	   gotoxy(x,y);                      
	   printf("x");
	   usleep(10000);	
		y++; //update  x=x+1
	}

 

 


    getch();
	return 0;
}
	void gotoxy(short x, short y)                   
	{
		COORD pos ={x,y};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}