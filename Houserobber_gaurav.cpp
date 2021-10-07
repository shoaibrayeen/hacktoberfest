#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of houses\n";
    cin >> n;
    vector<int>nums(n);
     cout << "Enter the amount in each house\n";
     for(int i=0;i<n;i++)
     {
         cin >> nums[i];
     }
     
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return nums[0];
    }
    
    int dp[n];
    for(int i = 0; i < n; i++){
        dp[i] = nums[i];
    }
    
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    
    for(int i = 2; i < n; i++){
        dp[i] = dp[i] + dp[i-2];
        if(dp[i] < dp[i-1]){
            dp[i] = dp[i-1];
        }
    }
    
   cout <<"Maximum amount of money that can be robbed is : "<<  dp[n-1] << "\n";
    
        return 0;
        
}
