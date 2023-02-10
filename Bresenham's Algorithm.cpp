#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

using namespace std;

int main(){
	initwindow(400,400);
	int x1,y1,x2,y2,i,lx,ly;
	cout<<"Enter start coordinates: "<<endl;
	cin>>x1>>y1;
	cout<<"Enter end coordinates: "<<endl;
	cin>>x2>>y2;
	
	int x=x1;
	int y=y1;
	int dx = abs(x2-x1);
	int dy = abs(y2-y1);
//	float k = dy/dx;
    
    if(x2>x1){
    	lx=1;
	}
	else
	{
		lx=-1;
	}
	
	if(y2>y1){
		ly=1;
	}
	else{
		ly=-1;
	}
	
	putpixel(x,y,RED);
	
	if(dx>dy){
		int p = 2*dy-dx;
		
		for(i=0;i<dx;i++){
		if(p>0){
			y=y+ly;
			x=x+lx;
			p=p+2*dy-2*dx;
		}
		else
		{
			y=y;
			x=x+lx;
			p=p+2*dy;
		}
		putpixel(x,y,RED);
		delay(50);
	}
	}
	else
	{
		int p = 2*dx-dy;
		
		for(i=0;i<dy;i++){
		if(p>0){
			y=y+ly;
			x=x+lx;
			p=p+2*dx-2*dy;
		}
		else{
			x=x;
			y=y+ly;
			p=p+2*dx;
		}
		putpixel(x,y,RED);
		delay(50);
	}
	}
	
	//line(150,100,250,250);
//	line(300,150,150,200);
//line(300,200,100,50);
	
	getch();
	closegraph();
}