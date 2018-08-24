#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <ctime>
using namespace std;

enum Move {STOP = 0, LEFT, UPLEFT, DOWNLEFT, RIGHT, UPRIGHT, DOWNRIGHT}; //current direction of the ball

class Ball
{
	private:
		int x, y; //new position, current
		int origx, origy; //starting position for this round
		Move dir; //variable to change direction
	public:
		Ball(int posx, int posy)
		{
			origx = posx; //when ball is created, will start at these coordinates
			origy = posy;
			x = posx;
			y = posy;
			dir = STOP;
		}
		
		void reset()//to begin this round again with the most recent starting position
		{
			x = origx;
			y = origy;
			dir = STOP;
		}
		void changedir(Move d)
		{
			dir = d;
		}
		inline int getx()
		{
			return x;
		}
		inline int gety()
		{
			return y;
		}
		inline int getdir()
		{
			return dir;
		}
		void randomdir()
		{
			dir = (Move)((rand() % 6) + 1);
		}
		void move()
		{
			switch(dir)
			{
				case STOP:
				break;
				case LEFT:
				x--;
				break;
				case UPLEFT:
				x--;
				y--;
				break;
				case DOWNLEFT:
				x--;
				y++;
				break;
				case RIGHT:
				x++;
				break;
				case UPRIGHT:
				x++;
				y--;
				break;
				case DOWNRIGHT:
				x++;
				y++;
				break;
				default:
				break;				
			}
		}
};

class Paddle
{
	private:
		int x, y;
		int origx, origy;
	public:
		Paddle(int posx, int posy)
		{
			origx = posx; 
			origy = posy;
			x = posx;
			y = posy;
		}
		inline reset()
		{
			x = origx;
			y = origy;
		}
		inline int getx()
		{
			return x;
		}
		inline int gety()
		{
			return y;
		}
		inline void up()
		{
			y--;
		}
		inline void down()
		{
			y++;
		}
};
class Game
{
	private:
		int width, height; 
		int score1, score2;
		bool quit;
		Ball* b;
		Paddle* p1;
		Paddle* p2;
	public:
		Game(int w, int h)
		{
			width = w;
			height = h;
			quit = false;
			score1 = score2 = 0;
			b = new Ball(w/2, h/2);
			p1 = new Paddle(1, (h/2) - 1);
			p2 = new Paddle(w - 2, (h/2) - 1);
		}
		~Game()
		{
			delete b, p1, p2;
		}
		void point(Paddle* player)
		{
			if(player == p1)
			{
				score1++;
			}
			else if(player == p2)
			{
				score2++;
			}
			b->reset();
			p1->reset();
			p2->reset();
		}
		void draw()
		{
			system("cls");//clears the console screen
			for(int i = 0; i < width; i++)
				cout << "+";
			cout << endl;
			
			for(int i = 0; i < height; i++)
			{
				for(int j = 0; j < width; j++)
				{
					if(j == 0 || j == width-1)
						cout << "+";
					else if(j == p1->getx() && (i == p1->gety() || (i == p1->gety() + 1)))
						cout << "|";
					else if(j == p2->getx() && (i == p2->gety() || (i == p2->gety() + 1)))
						cout << "|";
					else if(j == b->getx() && i == b->gety())
						cout << "O";
					else 
						cout << " ";
					
				}
				cout << endl;
			}
			
			for(int i = 0; i < width; i++)
				cout << "+";
			cout << endl;
			cout << "SCORE: " << score1 << " - " << score2;
			cout << "\nPress 'X' to quit";
		}
		void input()
		{
			if(_kbhit())
			{
				switch(_getch())
				{
					case 'w':
						p1->up();
						break;
					case 's':
						p1->down();
						break;
					case 'i':
						p2->up();
						break;
					case 'k':
						p2->down();
						break;
					case 'x':
						quit = true;
						break;
					case ' ':
						b->randomdir();
						break;
					default:
						break;
				}
			}
		}
		void logic()
		{
			b->move();
			if(b->getx() == (p1->getx() + 1) && (i == p1->gety() || (i == p1->gety() + 1)))
			{
				switch(b->getdir())
				{
					case LEFT:
						b->changedir(RIGHT);
						break;
					case UPLEFT:
						p1->down();
						break;
					case DOWNLEFT:
						p2->up();
						break;
					case RIGHT:
						p2->down();
						break;
					case UPRIGHT:
						quit = true;
						break;
					case DOWNRIGHT:
						b->randomdir();
						break;
					default:
						break;
				}
			}
		}
		void run()
		{
			while(!quit)
			{
				draw();
				input();
				logic();
			}
		}
};

int main()
{
	srand(time(0));
	Game g(16, 8);
	g.run();
}