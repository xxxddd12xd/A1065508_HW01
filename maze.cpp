//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#define row 15
#define col 15


int a[row][col]={{1,3,1,1,1,1,1,1,1,1,1,1,1,1,1},//1      
                 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//2      0=ǐ笵 
				 {1,0,1,2,1,2,1,2,1,2,1,2,1,0,1},//3      1=鲤
				 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//4      2=ǐ笵┪鲤(耞) 
				 {1,0,1,2,1,2,1,2,1,2,1,2,1,0,1},//5      3=1Pネ翴 
				 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//6      4=2Pネ翴
				 {1,0,1,2,1,2,1,2,1,2,1,2,1,0,1},//7
				 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//8
				 {1,0,1,2,1,2,1,2,1,2,1,2,1,0,1},//9
				 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//10
				 {1,0,1,2,1,2,1,2,1,2,1,2,1,0,1},//11
				 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//12
				 {1,0,1,2,1,2,1,2,1,2,1,2,1,0,1},//13
				 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//14
				 {1,1,1,1,1,1,1,1,1,1,1,1,1,4,1}};//15

int player1_x=1;
int player1_y=0;
int player2_x=13;
int player2_y=14;
				 
void map()//瓜 
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(a[i][j]==1)
			{
				printf("");
			}

			else if(a[i][j]==0)
			{
				printf("  ");
			}
			else if(a[i][j]==3)
			{
				printf("");
			}
			else if(a[i][j]==4)
			{
				printf("и");
			}

		}
		putchar('\n');
    }
}

				
				

void random_map()//癸瓜暗э 
{
	int star_random=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(a[i][j]==1)
			{
				printf("");
			}
			else if(a[i][j]==2)//耞糷 
			{
				a[i][j]=(rand()%2);	
				if(a[i][j]==1)
				{
					printf("");
					star_random=(rand()%2);
				}
				else
				{
					star_random=(rand()%2);
					if(star_random==1)
					{
						printf("  ");//ぇ琍琍 
					}
					else
					{
						printf("  ");
					}
				}
				
			}
			else if(a[i][j]==0)
			{
				star_random=(rand()%2);
				if(star_random==1)
				{
					printf("  ");//ぇ琍琍 
				}
				else
				{
					printf("  ");
				}
			}
			else if(a[i][j]==3)
			{
				printf("");
			}
			else if(a[i][j]==4)
			{
				printf("и");
			}

		}
		putchar('\n');
    }
}

//產1// 
void player1up()//產1北┕ 
{
	int temp=0;
	a[player1_y][player1_x]=temp;
	a[player1_y][player1_x]=0;
	player1_y--;
	if(a[player1_y][player1_x]==0)
	{
		a[player1_y][player1_x]=3;
	}
	else
	{
		player1_y++;
		a[player1_y][player1_x]=3;	
	}
}

void player1down()//產1北┕ 
{
	int temp=0;
	a[player1_y][player1_x]=temp;
	a[player1_y][player1_x]=0;
	player1_y++;       
	if(a[player1_y][player1_x]==0)
	{
		a[player1_y][player1_x]=3;		
	}
	else
	{
		player1_y--;
		a[player1_y][player1_x]=3;	
	}
}

void player1left()//產1北┕オ 
{
	int temp=0;
	a[player1_y][player1_x]=temp;
	a[player1_y][player1_x]=0;
	player1_x--;  
	if(a[player1_y][player1_x]==0)
	{
		a[player1_y][player1_x]=3;		
	}
	else
	{
		player1_x++;
		a[player1_y][player1_x]=3;	
	}      	
}

void player1right()//產1北┕
{
	int temp=0;
	a[player1_y][player1_x]=temp;
	a[player1_y][player1_x]=0;
	player1_x++;
	if(a[player1_y][player1_x]==0)
	{
		a[player1_y][player1_x]=3;
	}
	else
	{
		player1_x--;
		a[player1_y][player1_x]=3;	
	}
} 

//產2// 
void player2up()//產1北┕ 
{
	int temp=0;
	a[player2_y][player2_x]=temp;
	a[player2_y][player2_x]=0;
	player2_y--;
	if(a[player2_y][player2_x]==0)
	{
		a[player2_y][player2_x]=4;
	}
	else
	{
		player2_y++;
		a[player2_y][player2_x]=4;	
	}
}

void player2down()//產2北┕ 
{
	int temp=0;
	a[player2_y][player2_x]=temp;
	a[player2_y][player2_x]=0;
	player2_y++;       
	if(a[player2_y][player2_x]==0)
	{
		a[player2_y][player2_x]=4;		
	}
	else
	{
		player2_y--;
		a[player2_y][player2_x]=4;	
	}
}

void player2left()//產2北┕オ 
{
	int temp=0;
	a[player2_y][player2_x]=temp;
	a[player2_y][player2_x]=0;
	player2_x--;  
	if(a[player2_y][player2_x]==0)
	{
		a[player2_y][player2_x]=4;		
	}
	else
	{
		player2_x++;
		a[player2_y][player2_x]=4;	
	}      	
}

void player2right()//產2北┕
{
	int temp=0;
	a[player2_y][player2_x]=temp;
	a[player2_y][player2_x]=0;
	player2_x++;
	if(a[player2_y][player2_x]==0)
	{
		a[player2_y][player2_x]=4;
	}
	else
	{
		player2_x--;
		a[player2_y][player2_x]=4;	
	}
} 



void control()
{
	char key='a';
    while(1)
    {
    key= getch();
    	if(player1_y<0)//ňゎ產1禲瓜 
    	{
    		player1_y++;
		}
		if(player1_y>14)//ňゎ產1禲瓜 
    	{
    		player1_y--;
		}
    	if(player2_y<0)//ňゎ產2禲瓜 
    	{
    		player2_y++;
		}
		if(player2_y>14)//ňゎ產2禲瓜 
    	{
    		player2_y--;
		}
		
    	if(key=='w')//產1 
    	{
    		player1up();
		}
    	if(key=='d')//產1 
    	{
    		player1right();
		}
    	
    	if(key=='a')//產1オ 
    	{
    		player1left();
		}
		if(key=='s')//產1 
		{
			player1down();
		}
		/////////////////產2北/////////// 
		if(key=='8')//產2 
    	{
    		player2up();
		}
    	if(key=='6')//產2 
    	{
    		player2right();
		}
    	
    	if(key=='4')//產2オ 
    	{
    		player2left();
		}
		if(key=='2')//產2 
		{
			player2down();
		}	
	break;
	}	
}

int main()
{
	srand(time(NULL));
	random_map();
	printf("%d",a[14][13]);
	while(1)
	{
		control();
		system("cls");
		map();
	}
	
}

