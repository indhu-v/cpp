#include <iostream>
using namespace std;
inline void S(int x, int y) 
{
    int sum = x+y;
    cout << "SUM="<<sum<<endl;
}

inline void D(int x, int y) 
{
    int sub = x-y;
    cout << "DIFFERENCE="<<sub<<endl;
}

inline void M(int x, int y) 
{
    int mul = x*y;
    cout << "PRODUCT="<<mul<<endl;
}

inline void Di(int x, int y) 
{
    int div = x/y;
    cout << "QUOTIENT="<<div<<endl;
}

inline void Mo(int x, int y) 
{
    int mod = x%y;
    cout << "MODULUS="<<mod<<endl;
}
int main()
{
    int x,y;
    cout << "Enter any two numbers:\n";
    cin >>x>>y;
    cout << endl;
    S(x,y);
    D(x,y);
    M(x,y);
    Di(x,y);
    Mo(x,y);
    return 0;
}
