#include<iostream>
using namespace std;
class wall
{
	public:
		int l;
		wall(int l)
		{
			cout<<"hello wall"<<endl;
			cout<<"length:";
			cout<<"area:"<<l*l<<endl;
		}

};
int main()
{
	wall wall1(4);
	wall wall2(5);
	return 0;
}
