#include<bits/stdc++.h>
using namespace std;

//THIS IS NAIVE APPROACH O(n*n)
//Water cannot be stored on the top of the corner bar
//as they don't have any support on the left and 
//right side.So, we can only store water between
// 0 to n-1....
int water(int arr[] , int n)
{
    int res = 0;
    for(int i=1 ; i<n-1 ; i++)
    {
      int left = arr[i];
//Here we first find the max size bar on the left 
//for every element. 
      for(int j=0;i<i;j++)
         left = max(left,arr[j]);
//Here we first find the max size bar on the right
//for every element.
      int right = arr[i];

      for(int j=i+1 ; j<n ; j++)
         right = max(right,arr[j]);
//Amount of water stored inside the bar will be equal to
//we'll take the min of any of the bar and then subtract 
// it from the i'th bar and then that will give the
//amount of water stored in that barr.s
      res = res+ (min(left,right)-arr[i]);
    }
return res;    
}

//THIS IS THE EFFICIENT IMPLEMENTATION
//here we precompute both lmax and rmax for every
//element and store it an array 

int store(int arr[] , int n)
{
    int res=0;
    int l[n],r[n];

//Here we precompute lmax for every element 
//and store it an array
    l[0]=arr[0];
    for(int i=0 ; i<n ; i++)
        l[i] = max(arr[i],l[i-1]);

//Here we precompute lmax for every element
//and store it an array

    r[n-1]=arr[n-1];
      for(int i=n-2 ; i>=0 ; i--)
      r[i] = max(arr[i],r[i+1]);

    for(int i =1 ; i<n-1 ; i++)
    res = res + (min(l[i],r[i])-arr[i]);     

return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    cin>>arr[i];

    //cout<<water(arr,n);
    cout<<store(arr,n);

return 0;
}