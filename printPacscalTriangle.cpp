#include<bits/stdc++.h>
using namespace std;

long fact(int x)
{
    int i;
    long f=1;

    for(i=1;i<=x;++i)
    {
        f=f*i;
    }

    return f;
}

int main()
{
    int i,j,k,n;

    cout<<"How many lines u want to Print :: ";
    cin>>n;

    for(i=0;i<n;++i)
    {
        for(j=1;j<=(n-i-1);++j)
        {
            cout<<" ";
        }
        for(k=0;k<=i;++k)
        {
             cout<<fact(i)/(fact(i-k)*fact(k))<<" ";
        }

        cout<<"\n";
    }
    return 0;
}
