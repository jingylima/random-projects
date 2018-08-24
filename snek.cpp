#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <ctime>
using namespace std;


bool dead;
const int width = 20, height = 20;
int x, y, fx, fy, score;
int tx[100], ty[100];
int length;
enum Move {STOP, LEFT, RIGHT, UP, DOWN};
Move dir;

void start()
{
	dead = false;
	dir = STOP;
	x = width/2;
	y = height/2;
	fx = (rand() % (width - 2 )) + 1;
	fy = (rand() % (height - 2)) + 1;
	score = 0;
}

void draw()
{
	system("cls");//clears the console screen
	for(int i = 0; i < width; i++)
		cout << "S";
	cout << endl;
	
	for(int i = 0; i < height; i++)
	{
		for(int j = 0; j < width; j++)
		{
			if(j == 0 || j == width-1)
				cout << "S";
			else if(i == y && j == x)
				cout << "O";
			else if(i == fy && j == fx)
				cout << "%";
			else
			{
				bool print = false;
				for(int k = 0; k < length; k++)
				{
					if(tx[k] == j && ty[k] == i)
					{
						cout << "o";
						print = true;
					}
				}
				if(!print)
					cout << " ";
			}
		}
		cout << endl;
	}
	
	for(int i = 0; i < width; i++)
		cout << "S";
	cout << endl;
	cout << "Score: " << score;
	cout << "\nPress 'X' to quit";
}

void input()
{
	if(_kbhit())
	{
		switch(_getch())
		{
			case 'w':
				dir = UP;
				break;
			case 'a':
				dir = LEFT;
				break;
			case 's':
				dir = DOWN;
				break;
			case 'd':
				dir = RIGHT;
				break;
			case 'x':
				dead = true;
				break;
			default:
				break;
		}
	}
}

void logic()
{
	int prevx = tx[0];
	int prevy = ty[0];
	int prev2x, prev2y;
	tx[0] = x;
	ty[0] = y;
	
	for(int i = 1; i < length; i++)
	{
		prev2x = tx[i];
		prev2y = ty[i];
		tx[i] = prevx;
		ty[i] = prevy;
		prevx = prev2x;
		prevy = prev2y;
	}
	switch(dir)
	{
		case UP:
			y--;
			break;
		case DOWN:
			y++;
			break;
		case LEFT:
			x--;
			break;
		case RIGHT:
			x++;
			break;
		default:
			break;
	}
	if(x > width || x < 0 || y > height || y < 0)
		dead = true;
	if(x == fx && y == fy)
	{
		score++;
		fx = (rand() % (width - 2)) + 1;
		fy = (rand() % (height - 2)) + 1;
		length++;
		
	}
	for(int i = 0; i < length; i++)
	{
		if(x == tx[i] && y == ty[i])
			dead = true;
	}
}

int main()
{
	srand(time(0));
	start();
	while(!dead)
	{
		draw();
		input();
		logic();
		Sleep(100);
	}
	
}