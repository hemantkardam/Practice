
// The code below is incorrect. Debug this code to solve this problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  {
   int X,Y;
   cin>>X>>Y; 
   
   if (X<=Y && (X+200)>=Y)              
     {
       cout<<"Yes"<<endl;
      }
   else
     {
       cout<<"No"<<endl;
      }
  
  }
 return 0;
}