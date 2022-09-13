#include<iostream>
using namespace std;
class emp
{
	int eno,mbno,gs,bp,hra,da,pf,cf,ded,ns;
	char ename[30],add[50],mail[100];
	public:
		void cal();
		void diaplay();
};
void emp::cal()
{
	cout<<"enter employee number-"<<endl;
	cin>>eno;
	cout<<"enter employeee name-"<<endl;
	cin>>ename;
    cout<<"enter address-"<<endl;
	cin>>add;
	cout<<"enter mobile number-"<<endl;
	cin>>mbno;
	cout<<"enter mail id-"<<endl;
    cin>>mail;
    cout<<"enter basic pay"<<endl;
    cin>>bp;
    hra=bp*10/100;
    da=bp*97/100;
    pf=bp*12/100;
    cf=bp*0.1/100;
    gs=bp+hra+da;
    ded=pf+cf;
    ns=gs-ded;

}
void emp::diaplay()
{
	cout<<"employee number-"<<eno<<endl;
	cout<<"employeee name-"<<ename<<endl;
    cout<<"address-"<<add<<endl;
	cout<<"mobile number-"<<mbno<<endl;
	cout<<"mail id-"<<mail<<endl;
    cout<<"basic pay="<<bp<<endl;
	cout<<"gross salary="<<gs<<endl;
    cout<<"net salary="<<ns<<endl;
}

int main()
{
	emp a;
	a.cal();
	a.diaplay();
	return 0;
}
