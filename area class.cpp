#include<iostream>
#include<stdio.h>
using namespace std;
class area
{
	int ar,ar1,ar2,x,y,r;
	public:
		void circle();
		void rectangle();
		void disp();
		void triangle()
		{
			cout<<"x y";
				cin>>x;
			cin>>y;
			ar=1/2*x*y;
			cout<<"ar of triangle is"<<ar<<endl;
		}
};
void area:: rectangle()
{
	cout<<"x y";
	    cin>>x>>y;
	    ar1=x*y;
		cout<<"ar of rect is"<<ar1<<endl;
	
}
void area::circle()
{
	cout<<"r";
	cin>>r;
	ar2=3.14*r*r;
		cout<<"ar of circle is"<<ar2<<endl;
		
	
	
}
void area::disp()
{
	cout<<"tri is"<<ar<<endl;
	cout<<"circle is"<<ar1<<endl;
	cout<<"rect is"<<ar2<<endl;
}
int main()
{
	area a;
	a.circle();
	a.rectangle();
	a.triangle();
	a.disp();
}
