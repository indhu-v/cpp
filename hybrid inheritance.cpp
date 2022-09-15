#include<iostream>
using namespace std;
class person
{
	public:
		char name[30];
		void n()
		{
			cout<<"enter name"<<endl;
			cin>>name;
		}
};
class account: public person
{
	public:
		int ano;
		void n1()
		{
			cout<<"enter account number-"<<endl;
			cin>>ano;
		}
};
class admin:public person
{
	public:
		int rno;
		void n2()
		{
			cout<<"enter registration number"<<endl;
			cin>>rno;
		}
};
class master:public virtual account,public admin
{
	public:
		int mno;
		void n3()
		{
			cout<<"enter master number"<<endl;
			cin>>mno;
		}
		void n4()
		{
			cout<<"account number-"<<ano<<endl;
			cout<<"registration number-"<<rno<<endl;
			cout<<"master number-"<<mno<<endl;
		}
		
};
int main()
{
	person p;
	p.n();
	master g;
	g.n1();
	g.n2();
	g.n3();
	g.n4();
	return 0;

}
