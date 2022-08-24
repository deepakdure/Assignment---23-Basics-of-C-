#include<iostream>
using namespace std;
int main()
{
    int a[10],i,s=0;
    cout<<"enter 10 numbers"<<endl;
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    {
        s=s+a[i];
    }
    cout<<"Sum of 10 numbers = "<<s;
    return 0;
}