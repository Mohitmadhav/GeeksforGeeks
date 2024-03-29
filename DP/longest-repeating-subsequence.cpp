//Problem Statement: https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    
		    string a= str;
		    string b= str;
		    int n= str.length();
		    
		    int dp[n+1][n+1];
		    
		    for(int i=0;i<=n;i++)
		    dp[i][0]=0;
		    
		   
		    for(int j=0;j<=n;j++)
		    dp[0][j]=0;
		    
		      
		    for(int i=1;i<=n;i++){
		        for(int j=1;j<=n;j++)
		        {
		            if(a[i-1]==b[j-1] && i!=j)
		            dp[i][j] = dp[i-1][j-1]+1;
		            
		            else
		            dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
		        }
		    }
		    
		    return dp[n][n];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends