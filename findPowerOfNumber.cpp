#include<bits/stdc++.h>
using namespace std;

int main()
{
   int b,p,i,pow=1;
   cout<<"Enter base of a number :: ";
   cin>>b;
   cout<<"\nEnter power to a base [ "<<b<<" ] :: ";
   cin>>p;

   for(i=p;i>0;i--)
   {
        pow=pow*b;
   }
   cout<<"\nPower of a Number [ "<<b<<" ^ "<<p<<" ] :: "<<pow<<"\n";

  return 0;
  }
