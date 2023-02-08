#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

using namespace std;

int main(){
	
	initwindow(400,400);
	int x1,y1,x2,y2;
	float k;
	cout<<"Enter start coordinates: "<<endl;
	cin>>x1>>y1;
	cout<<"Enter end coordinates: "<<endl;
	cin>>x2>>y2;
	
	float x=x1;
	float y=y1;
	int dx = x2-x1;
	int dy = y2-y1;

	if(abs(dx)>abs(dy)){
		k=abs(dx);
	}
	else
	{
		k=abs(dy);
	}

    float xinc = dx/k;
    float yinc = dy/k;
    
    putpixel(x,y,RED);
    
    for(int i=1;i<k;i++){
    	x=x+xinc;
    	y=y+yinc;
    	putpixel(round(x),round(y),RED);
	}
//putpixel(x,y,RED);
//while(x!=x2 && y!=y2){
//	if(abs(dx)>abs(dy)){
//		k=dx;
//		x++;
//		y=y+dy/k;
//	}
//	else
//	{
//		k=dy;
//		y++;
//		x=x+dx/k;
//	}
//	putpixel(round(x),round(y),RED);
//}

//line(300,400,100,250);
  getch();
  closegraph();
	
}
