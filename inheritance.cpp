#include<iostream>
using namespace std;
class P
{
	int x=5;
	public:
		void getdata()
		{
			cout<<"x value"<<x<<endl;
		}
};
class C: public P
{
	int y=12;
	public:
	void getdata1()
	{
		cout<<"y value"<<y<<endl;
	}
};
int main()
{
	C c;
	c.getdata();
	c.getdata1();
	return 0;
}
