#include<iostream>
using namespace std;
class stud
{
	public:
		int rol;
		void data()
		{
			cout<<"roll number-"<<endl;
			cin>>rol;
		}
};
class test: public stud
{
	public:
		int m1,m2;
		void marks()
		{
			cout<<"mark 1-"<<endl;
			cin>>m1;
			cout<<"mark2-"<<endl;
			cin>>m2;
		}
};
class result: public test
{
	public:
		int tot;
		void res()
		{
			cout<<"result-"<<m1+m2<<endl;
		}
};
int main()
{
	result r;
	r.data();
	r.marks();
	r.res();
	return 0;
}
