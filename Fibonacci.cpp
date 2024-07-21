#include<iostream>
using namespace std;

int main()
{
    int a=0,b=1,n;
    cin>>n;
    cout<<"Your Fibonacci series is:"<<endl<<a<<endl<<b<<endl;
    for(int i=1;i<n-1;i++)
    {
        int nxtnumber=a+b;
        cout<<nxtnumber<<endl;

        a=b;
        b=nxtnumber;  
    }
}