#include<iostream>
using namespace std;
class p
{
	public:
		int a,b;
		void display()
		{
		   cout<<"enter a-"<<endl;
		   cin>>a;
		   cout<<"enter b-"<<endl;
		   cin>>b;
	}
};
class c: public p
{
	public:
		void cal()
		{
			cout<<"sum="<<a+b<<endl;
			cout<<"product="<<a*b<<endl;
		}
};
int main()
{
	c a;
	a.display();
	a.cal();
	return 0;
}
