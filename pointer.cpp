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
cout<<"objs area:"<<obj.area()<<endl;
  cout<<"*foos area:"<<* foo->area()<<endl;
  cout<<"*bars area:"<<* bar->area()<<endl;
  cout<<"*baz[0]s area"<<* baz[0].area()<<endl;
  cout<<"*baz[1]s area:"<<* baz[1].area()<<endl;
  delete bar;
  delete []baz;
  return 0;
  }
