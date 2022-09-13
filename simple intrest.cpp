#include <iostream>
using namespace std;

int main(){
    int p, t, r, SI,age;
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter no of years): ";
    cin >> t;
    cout<<"enter age";
    cin>>age;
    if(age>=60)
    {
        SI = (p*10*t) / 100;

    cout << "Simple Interest: " << SI << endl;
    }
    else if(age<=60)
    {
    
        SI = (p*12*t) / 100;

    cout << "Simple Interest: " << SI << endl;
  }
    return 0;
}

