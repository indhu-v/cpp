#include<iostream>
using namespace std;
class area
{
	public:
		int l,b,s;
		void rectangle(int l,int b)
		{
			cout<<"AREA OF RECTANGLE="<<l*b<<endl;
		}
		void rectangle(int s)
		{
			cout<<"AREA OF SQUARE="<<s*s<<endl;
		}
};
int main()
{
	area a;
	a.rectangle(5,10);
	a.rectangle(5);
	return 0;
}
