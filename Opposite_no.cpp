#include<iostream>
using namespace std;
int main()
{
  int ans=0,dgt,n;
  cin>>n;
  
  while(n!=0){
    dgt=n%10;
    ans=ans*10+dgt;
    n=n/10;
  }
  cout<<ans;
  return 0;
}