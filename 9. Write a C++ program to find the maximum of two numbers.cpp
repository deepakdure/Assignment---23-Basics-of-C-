#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    if(a>b)
    cout<<"Greater Number is = "<<a;
    else if(b>a)
    cout<<"Greater Number is = "<<b;
    else
    cout<<"both are equal";
    return 0;
}