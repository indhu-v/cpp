#include<iostream>
using namespace std;
class eb
{
	int cno,pmr,cmr,u,amt;
	char cname[30];
	public:
		void d_cal();
		void c_cal();
		void diaplay();
};
void eb::d_cal()
{
	cout<<"enter consumer number-"<<endl;
	cin>>cno;
	cout<<"enter consumer name-"<<endl;
	cin>>cname;
	cout<<"enter previous month reading-"<<endl;
	cin>>pmr;
	cout<<"enter current month reading-"<<endl;
	cin>>cmr;
	u=cmr-pmr;
	cout<<"units-"<<u<<endl;
	if(u<=100)
	{
		amt=u*1;
		cout<<"amount-"<<amt<<endl;
	}
	else if(u>=101&&u<=200)
	{
		amt=u*2.50;
		cout<<"amount-"<<amt<<endl;
	}
	else if(u>=201&&u<=500)
	{
		amt=u*4;
		cout<<"amount-"<<amt<<endl;
	}
	else if(u>501)
	{
		amt=u*6;
		cout<<"amount-"<<amt<<endl;
	}
	else
	{
		printf("invalid unit");
	}
	
}
void eb::c_cal()
{
	cout<<"enter consumer number-"<<endl;
	cin>>cno;
	cout<<"enter consumer name-"<<endl;
	cin>>cname;
	cout<<"enter previous month reading-"<<endl;
	cin>>pmr;
	cout<<"enter current month reading-"<<endl;
	cin>>cmr;
	u=cmr-pmr;
	cout<<"units-"<<u<<endl;
	if(u<=100)
	{
		amt=u*2;
		cout<<"amount-"<<amt<<endl;
	}
	else if(u>=101&&u<=200)
	{
		amt=u*4.50;
		cout<<"amount-"<<amt<<endl;
	}
	else if(u>=201&&u<=500)
	{
		amt=u*6;
		cout<<"amount-"<<amt<<endl;
	}
	else if(u>501)
	{
		amt=u*7;
		cout<<"amount-"<<amt<<endl;
	}
	else
	{
		printf("invalid unit");
	}
	
}
void eb::diaplay()
{
	cout<<"enter consumer number-"<<endl;
	cin>>cno;
	cout<<"enter consumer name-"<<endl;
	cin>>cname;
	cout<<"enter previous month reading-"<<endl;
	cin>>pmr;
	cout<<"enter current month reading-"<<endl;
	cin>>cmr;
	u=cmr-pmr;
	cout<<"units-"<<u<<endl;
}
int main()
{
	int choice;
	cout<<"enter choice domestic(1) or commercial(2)-"<<endl;
	cin>>choice;
	eb a;
	switch (choice)
	{
		case 1:
		a.d_cal();
		break;
		case 2:
		a.c_cal();
		break;
		default:
			cout<<"enter domestic or comercial"<<endl;
			
	}
	return 0;
}
