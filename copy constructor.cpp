#include<iostream>
using namespace std;
class wall
{
	public:
		int len;
	    int hgt;
		wall(int l,int h)
		{
			len=l;
			hgt=h;
		}
		wall(wall &a)
		{
			len=a.len;
			hgt=a.hgt;
		}
		int cal()
		{
			return len*hgt;
		}
};
int main()
{
	wall wall1(10,8);
	wall wall2=wall1;
	cout<<"area of wall 1:"<<wall1.cal()<<endl;
	cout<<"area of wall2:"<<wall2.cal()<<endl;
	return 0;
}
