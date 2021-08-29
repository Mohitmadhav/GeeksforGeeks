#include<bits/stdc++.h>

using namespace std;

int editDis(string str1, string str2)
{
    int m=str1.length();
    int n=str2.length();

    int dp[m+1][n+1];

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)//1st string empty
            dp[i][j]=j;

            else if(j==0)//2nd one empty
            dp[i][j]=i;

            else if(str1[i-1]==str2[j-1])
            dp[i][j]=dp[i-1][j-1];

            else
            dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);

        }
    }

    return dp[m][n];

}
int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    string str1,str2;

	    cin>>str1>>str2;

	    cout<<editDis(str1,str2)<<endl;
	}
	return 0;
}
