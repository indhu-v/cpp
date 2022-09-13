#include<iostream>
using namespace std;
int main()
{
    int age,b;
    cout<<"Enter the age: ";
    cin>>age;
    if(age>=18)
    {
        printf("eligible to vote");
    }
    else
    {
        printf("ineligible to vote");
        b=18-age;
        printf("age remaining is");
        cout<<b;
    
    }
}

