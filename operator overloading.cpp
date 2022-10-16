#include<iostream>
using namespace std;
class count
{
	public:
		int v;
		count():v()
		{
			cout<<"index:";
			cin>>v;
		}
		void operator ++()
		{
			v=v+1;
		}
		void dis()
		{
			cout<<"length:"<<v<<endl;
		}
};
int main()
{
	count c;
	c.operator ++();
	c.dis();
	return 0;
}
