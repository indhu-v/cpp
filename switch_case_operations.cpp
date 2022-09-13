#include <iostream>
using namespace std;

int main() {
    int a,b,c,choice;
    cout<<"provide your choice no";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cin>>a;
        cin>>b;
        c=a+b;
        cout<<"add"<<c;
        break;
        case 2:
        cin>>a;
        cin>>b;
        c=a-b;
        cout<<"sub"<<c;
        break;
        case 3:
        cin>>a>>b;
        c=a*b;
        cout<<"mul"<<c;
        break;
        case 4:
        cin>>a>>b;
        c=a/b;
        cout<<"div"<<c;
        break;
        case 5:
        	cin>>a>>b;
        	c=a%b;
        	cout<<"mod"<<c;
        	break;
        default:
        cout<<"enter 1 to 5 only";
        break; }
}

