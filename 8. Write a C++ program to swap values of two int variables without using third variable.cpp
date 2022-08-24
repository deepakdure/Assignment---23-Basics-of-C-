#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping numbers are = "<<endl<<"a = "<<a<<endl<<"b = "<<b;
    return 0;
}