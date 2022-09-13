#include<iostream>
using namespace std;
class add
{
	int x,y;
	public:
		void input();
		void display();
};
void add::input()
{
	cout<<"enter x and y value";
	cin>>x>>y;
}
void add::display()
{
	cout<<"sum od 2 numbers"<<x+y;
}
int main()
{
	add a;
	a.input();
	a.display();
	return 0;
}
