#include<iostream>
using namespace std;
class biggest
{
	int x,y;
	public:
		void input();
		void display();
		
};
void biggest::input()
{
	cout<<"enter x"<<endl;
	cin>>x;
	cout<<"enter y"<<endl;
	cin>>y;
	if(x>y)
	{
		printf("x is biggest");
	}
	else
	{
		printf("y is biggest");
	}
	cout<<endl;
}
void biggest::display()
{
	cout<<"x is"<<x<<endl;
	cout<<"y is"<<y<<endl;
}
int main()
{
	biggest a;
	a.input();
	a.display();
	return 0;
}

