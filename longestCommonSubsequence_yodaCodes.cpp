#include <iostream>

using namespace std;

int longestCommonSubsequence(string text1, string text2) {
    int n = text1.size(), m = text2.size();
    
    int dp[n+1][m+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }else if(text1[i-1] == text2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    return dp[n][m];
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    cout << "The length of the longest common subsequence is " << longestCommonSubsequence(s1, s2) << "\n";

    return 0;
}