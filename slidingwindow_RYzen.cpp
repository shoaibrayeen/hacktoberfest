#include<bits/stdc++.h>
using namespace std;

int window(int arr[],int n,int k)
{
   int sum = 0;
   if(n<k)
   return -1;

   for(int i=0;i<k;i++)
      { sum += arr[i]; }

   int max_sum = sum;

   for(int i=k ; i<n ; i++)
   { 
    sum += (arr[i] - arr[i-k]);}
    max_sum = max(max_sum,sum);

return max_sum;
}

int main()
{
    int n,k;
    
    cin>>n;
    cin >> k;
    int arr[n];
    
    for(int i=0;i<n;i++)
     cin>>arr[i];
    
    

  cout<<window(arr,n,k);

return 0;
}