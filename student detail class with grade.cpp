#include<iostream>
using namespace std;
class student
{
	int rno,m1,m2,m3,avg;
	char name[30];
	public:
		void getdata();
		void calculate();
		void diaplay();
};
void student::getdata()
{
	cout<<"enter registration number-"<<endl;
	cin>>rno;
	cout<<"enter name-"<<endl;
	cin>>name;
	cout<<"mark1-"<<endl;
	cin>>m1;
	cout<<"mark2-"<<endl;
	cin>>m2;
	cout<<"mark3-"<<endl;
	cin>>m3;
}
void student::calculate()
{
	cout<<"total="<<m1+m2+m3<<endl;
	if(m1>=50&&m2>=50&&m3>=50)
	{
	   avg=(m1+m2+m3)/3;
	   cout<<"average-"<<avg<<endl;
	   if (avg>=90)
	   {
	   	printf("S grade ");
	   }
	   else if(avg>=80&&avg<=89)
	   {
	   	printf("A grade");
	   }
	   else if(avg>=71&&avg<=79)
	   {
	   	printf("B grade");
	   }
	   else if(avg>=50&&avg<=70)
	   {
	   	printf("C grade");
	   }
   }
   else
   {
   	cout<<"student is failed"<<endl;
   }
   
}
void student::diaplay()
{
	cout<<"registration number-"<<rno<<endl;
	cout<<"name-"<<name<<endl;
	cout<<"mark1-"<<m1<<endl;
	cout<<"mark2-"<<m2<<endl;
	cout<<"mark3-"<<m3<<endl;
}
int main()
{
	student a;
	a.getdata();
	a.diaplay();
	a.calculate();
	return 0;
}
