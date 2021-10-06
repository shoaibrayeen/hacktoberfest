/*
LEETCODE
84. Largest Rectangle in Histogram
Find the largest rectangular area possible in a given histogram where the
largest rectangle can be made of a number of contiguous bars.
For simplicity, assume that all bars have same width and the width is 1 unit.
For example, consider the following histogram with 7 bars of heights
 {6, 2, 5, 4, 5, 1, 6}. The largest possible rectangle possible is 12
*/
#include<bits/stdc++.h>
using namespace std;

//Approach 1: Brute Force
//For each element/bar A[i] we calculate left and right boundaries till the start and end of array
//and till the point an element has shorter/smaller value than of A[i]
//Then calculate area as A[i]*(rb-lb-1);
//Time:O(N^2)
//Space:O(1)
void largestRectangle(vector<int> arr)
{
    int n=arr.size();
    int ans=0;
    if(n==1)
    {
        cout<<arr[0];
    }
    else{
    for(int i=0;i<n;i++)
    {
        int left_boundary=i;
        int right_boundary=i;
        while(left_boundary>=0&&arr[left_boundary]>=arr[i])
        {
            left_boundary--;
        }
        while(right_boundary<n&&arr[right_boundary]>=arr[i])
        {
            right_boundary++;
        }

        ans=max(ans,arr[i]*(right_boundary-left_boundary-1));
    }
    cout<<ans;
    }

}

//Approach 2- Using Stacks, stacks are storing the indexes of the bars
//Time:O(N)
//Space:O(N)
void largestRectangle2(vector<int> arr)
{
    stack<int> st;
    int n=arr.size();
    int rb;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        rb=i; //right boundary for elements greater than arr[i]
        while(!st.empty()&& arr[i]<arr[st.top()]) //if encountered element with smaller height than previous-> pop it out
        {
            int lb=-1;
            int curr=st.top();
            st.pop();

            if(st.size())
            {
                lb=st.top();
            }
            ans=max(ans,(rb-lb-1)*arr[curr]);
        }

        if(st.size()!=0)
        {
            ans=max(ans,(i-st.top())*arr[i]);
        }
        st.push(i);
    }

    rb=n;
    while(st.size())
    {
        int lb=-1;
        int curr=st.top();
        st.pop();

        if(st.size())
        {
            lb=st.top();
        }
        ans=max(ans,(rb-lb-1)*arr[curr]);
    }

    cout<<ans;
}


int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Approach 1-> ";
    largestRectangle(arr);
    cout<<endl;
    cout<<"Approach 2-> ";
    largestRectangle2(arr);

    return 0;
}
