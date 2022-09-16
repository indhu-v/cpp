#include<iostream>
using namespace std;
class arithmetic
{
	public:
		int x=10,y=20;
		virtual void disp()
		{
			cin>>x;
			cin>>y;
			cout<<"X is = "<<x<<endl;
			cout<<"Y is = "<<y<<endl;
		}
};
class add:public arithmetic
{
	public:
		void disp()
		{
			cout<<"ADDITION="<<x+y<<endl;
			
		}
};
class sub:public arithmetic
{
	public:
		void disp()
		{
			cout<<"SUBTRACTION="<<x-y<<endl;
		}
};
class mul:public arithmetic
{
	public:
		void disp()
		{
			cout<<"PRODUCT="<<x*y<<endl;
		}
};
class div:public arithmetic
{
	public:
	    void disp()
		{
			cout<<"QUOTIENT="<<x/y<<endl;
		}
};
class mod:public arithmetic
{
	public:
	 	void disp()
		{
			cout<<"REMAINDER="<<x%y<<endl;
		}
}; 
int main()
{
	arithmetic *j;
	add a;
	sub s;
	mul m;
	div d;
	mod c;
	j = &a;
	j->disp();
	j = &s;
	j->disp();
	j = &m;
	j->disp();
	j = &d;
	j->disp();
    j = &c;
	j->disp();
	return 0;
}
