#include<iostream>
using namespace std;
class emp
{

	public:
		int eid,sal;
	    char ename[30];
		void data()
		{
			cout<<"employee id-"<<endl;
			cin>>eid;
			cout<<"employee name-"<<endl;
			cin>>ename;
			cout<<"basic salary-"<<endl;
			cin>>sal;
		}
};
class cal: public emp
{
	int hra,da,gs,pf,cf,ded,ns;
	public:
		void calculate()
		{
			hra=sal*10/100;
			da=sal*97/100;
			gs=sal+hra+da;
			pf=sal*10/100;
			cf=sal*0.1/100;
			ded=pf+cf;
			ns=gs-ded;
			cout<<"gross salary-"<<gs<<endl;
			cout<<"net salary-"<<ns<<endl;
		}
};
int main()
{
	cal c;
	c.data();
	c.calculate();
	return 0;
}
