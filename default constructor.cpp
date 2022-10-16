#include<iostream>
using namespace std;
class wall
{
	public:
		int l;
		wall()
		{
			cout<<"length:"<<endl;
			cin>>l;
			cout<<"area of wall:"<<l*l;
		}
};
int main()
{
	wall wall1;
	return 0;
}
