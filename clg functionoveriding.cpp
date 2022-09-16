#include<iostream>
using namespace std;
class university
{
	public:
		virtual void student()
		{
			cout<<"staff name"<<endl;
		}
};
class engg_clg:public university
{
	public:
		void student()
		{
			cout<<"engineering student"<<endl;
		}
};
class arts_clg:public university
{
	public:
		void student()
		{
			cout<<"arts student"<<endl;
		}
};
class medical:public university
{
	public:
		void student()
		{
			cout<<"medical"<<endl;
		}
};
class health:public medical
{
	public:
		void staff_detail()
		{
			cout<<"staff details"<<endl;
		}
};
class psychio:public medical
{
	public:
		void typist()
		{
			cout<<"typist"<<endl;
		}
};
int main()
{
	university *u;
	engg_clg e;
	arts_clg a;
	medical m;
	health h;
	psychio p;
	u=&e;
	u->student();
	u=&a;
	u->student();
	u=&m;
	u->student();
	h.staff_detail();
	p.typist();
	return 0;
}

