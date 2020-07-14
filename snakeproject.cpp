#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<unistd.h>
#include<windows.h>
using namespace std;
bool gameover;
const int width=30;
const int height=30;
int x,y,fruitx,fruity,score;
int tailx[100];int taily[100];
int ntail;

enum direction{
	
	stop=0,l,r,u,d
};

void setup(){
	enum direction dir;
	gameover=false;
	 dir=stop;
	x=width/2;
	y=height/2;
	fruitx=rand()%width;
	fruity=rand()%height;
	score =0;
	ntail++;
	
}
void draw(){
	system("cls");
	for(int i=0;i<width+2;i++)
	cout<<"#";
	cout<<endl;
	
	for(int i=0;i<height;i++)
	{
	  for(int j=0;j<width;j++)
	{
		if(j==0)
		cout<<"#";
		 if(i==y && j==x)
		cout<<"O";
	  else if (i==fruity && j==fruitx)
	   cout<<"F";
	  else
	   	cout<<" ";
	   
	     if(j==width-1)
		cout<<"#";
		
	}
	
	cout<<endl;
}
		for(int i=0;i<width+2;i++)
		cout<<"#";
	cout<<endl;
cout<<"SCORE:"<<score<<endl;
}
	

void input(){
	if(_kbhit())
	{
		switch(_getch())
		{
			enum direction dir;
			case 'a':
				dir=l;break;
					case 'd':
				dir=r;break;
					case 'w':
				dir=u;break;
					case 's':
				dir=d;break;
				case 'x':
					gameover=true;
					break;
			
		}
	}
}
void logic(){
	enum direction dir;
  switch(dir)
  {
  	case l:
  		x--;
  		break;
  			case r:
  		x++;
  		break;
  			case u:
  		y--;
  		break;
  	
  			case d: x++;
			  break;
			  default:
			  	break;
			  	
			  
  	
  		
  		
  	
  	
  	
  }
  if(x>width || x<0|| y>height || y<0)
  gameover=true;
  if(x==fruitx && y==fruity)
  score=score+10;
  fruitx=rand()%width;
	fruity=rand()%height;
	
	
}







int main()
{
	setup();
	while(!gameover)
	{
	draw();
	input();
	logic();
	sleep(10);	
	}
	
	
	
}
