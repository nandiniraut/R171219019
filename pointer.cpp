#include<iostream>
using namespace std;
class rectangle
{
 int height ,width;
	public:
             rectangle(int x,int y):height(x),width(y){}
	     int area(void){ return height*width; }
}; 
int main()
{
  rectangle obj(3,5);
  rectangle * foo,* bar,* baz;
  foo =&obj;
  bar=new rectangle(10,15);
  baz=new rectangle[2]{{2,3},{4,6}};
  return 0;
}

