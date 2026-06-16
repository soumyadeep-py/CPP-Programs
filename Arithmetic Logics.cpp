#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter Number 1: ";
    cin>>a;
    cout<<"Enter Number 2: ";
    cin>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    cout<<"Difference, "<<a<<" - "<<b<<" = "<<a-b<<endl;
    cout<<"Product, "<<a<<" * "<<b<<" = "<<a*b<<endl;
    cout<<"Quotient, "<<a<<" / "<<b<<" = "<<(float)a/b<<endl;
    cout<<"Remainder, "<<a<<" % "<<b<<" = "<<a%b<<endl;

    return 0;
}