// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long countWays(int);

int main()
{
    //taking testcases
	int t;
	cin >> t;

	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;

		//calling function countWays()
		cout << countWays(n) << endl;
	}

    return 0;

}
// } Driver Code Ends

// function to count number of ways to reach top of the stair
long long countWays(int n){

    // your code here
    long long dp[n+1];

    dp[1]=1;
    dp[2]=2; // 1+1,2
    dp[3]=4; // 1+1+1, 2+2,1+3,3+1

    for(int i=4;i<=n;i++)
    dp[i]=(dp[i-3]+dp[i-2]+dp[i-1])%1000000007;

    return dp[n];



}
