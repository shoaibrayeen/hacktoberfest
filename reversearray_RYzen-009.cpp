// this is the code  to reverse the array 
//input :- 1 2 3 4 5 
//output :- 5 4 3 2 1
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n)
{
	int low=0 , high=n-1;
	while(low<high)
	{
		int temp =arr[low];
		arr[low] = arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for( int i=0;i<n;i++)
		cin>>arr[i];

	reverse(arr,n);
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";	

	return 0;
}
/*
another method is use rev() STL function in that we dont need to perform the swap function
*/