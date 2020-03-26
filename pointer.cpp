#include<iostream>
using namespace std;
class rectangle
{
 int height ,width;
	public:
             rectangle(int x,int y):height(x),width(y){}
	     int area(void){ return height*width; }
}; 

