#include<iostream>
using namespace std;
class shape
{
	public:
		char sh[30];
		void shap()
		{
			cout<<"enter your shape-"<<endl;
			cin>>sh;
		}
	
};
class rect
{
	public:
		int l,b;
		void area()
		{
			cout<<"enter length-"<<endl;
			cin>>l;
			cout<<"enter width-"<<endl;
			cin>>b;
			cout<<"area of the given rectangle="<<l*b<<endl;
		}
};
class cuboid:public virtual rect,public shape
{
	public:
		int h;
		void volume()
		{
			cout<<"enter heigth-"<<endl;
			cin>>h;
			cout<<"volume of the given cuboid="<<l*b*h<<endl;
		}
};
int main()
{
	cuboid c;
	c.shap();
	c.area();
	c.volume();
	return 0;
}
