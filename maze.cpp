//�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i�i
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#define row 15
#define col 15


int a[row][col]={{1,3,1,1,1,1,1,1,1,1,1,1,1,1,1},//1      
                 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//2      0=���D 
				 {1,0,1,2,1,2,1,2,1,2,1,2,1,0,1},//3      1=��
				 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//4      2=���D����(�P�_) 
				 {1,0,1,2,1,2,1,2,1,2,1,2,1,0,1},//5      3=1P�X���I 
				 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//6      4=2P�X���I
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
				 
void map()//�w�ب�a�� 
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(a[i][j]==1)
			{
				printf("�i");
			}

			else if(a[i][j]==0)
			{
				printf("  ");
			}
			else if(a[i][j]==3)
			{
				printf("�A");
			}
			else if(a[i][j]==4)
			{
				printf("��");
			}

		}
		putchar('\n');
    }
}

				
				

void random_map()//���a�ϰ��ק� 
{
	int star_random=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(a[i][j]==1)
			{
				printf("�i");
			}
			else if(a[i][j]==2)//�P�_�h 
			{
				a[i][j]=(rand()%2);	
				if(a[i][j]==1)
				{
					printf("�i");
					star_random=(rand()%2);
				}
				else
				{
					star_random=(rand()%2);
					if(star_random==1)
					{
						printf("  ");//�����P�P 
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
					printf("  ");//�����P�P 
				}
				else
				{
					printf("  ");
				}
			}
			else if(a[i][j]==3)
			{
				printf("�A");
			}
			else if(a[i][j]==4)
			{
				printf("��");
			}

		}
		putchar('\n');
    }
}

//���a1// 
void player1up()//���a1����W 
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

void player1down()//���a1����U 
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

void player1left()//���a1����� 
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

void player1right()//���a1����k
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

//���a2// 
void player2up()//���a1����W 
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

void player2down()//���a2����U 
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

void player2left()//���a2����� 
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

void player2right()//���a2����k
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
    	if(player1_y<0)//����a1�]�X�a�� 
    	{
    		player1_y++;
		}
		if(player1_y>14)//����a1�]�X�a�� 
    	{
    		player1_y--;
		}
    	if(player2_y<0)//����a2�]�X�a�� 
    	{
    		player2_y++;
		}
		if(player2_y>14)//����a2�]�X�a�� 
    	{
    		player2_y--;
		}
		
    	if(key=='w')//���a1�W 
    	{
    		player1up();
		}
    	if(key=='d')//���a1�k 
    	{
    		player1right();
		}
    	
    	if(key=='a')//���a1�� 
    	{
    		player1left();
		}
		if(key=='s')//���a1�U 
		{
			player1down();
		}
		/////////////////���a2����/////////// 
		if(key=='8')//���a2�W 
    	{
    		player2up();
		}
    	if(key=='6')//���a2�k 
    	{
    		player2right();
		}
    	
    	if(key=='4')//���a2�� 
    	{
    		player2left();
		}
		if(key=='2')//���a2�U 
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

