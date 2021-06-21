// Problem Statement Link: https://practice.geeksforgeeks.org/problems/cutted-segments1642/1#

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        int len[] = {x, y, z};
        int dp[4][n + 1];

        for (int i = 0; i < 4; i++)
            dp[i][0] = 0;

        for (int j = 0; j < n + 1; j++)
            dp[0][j] = INT_MIN;

        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                if (len[i - 1] <= j)
                {
                    dp[i][j] = max(1 + dp[i][j - len[i - 1]], dp[i - 1][j]);
                }

                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[3][n] < 0 ? 0 : dp[3][n];
    }
};

int main()
{

    //taking testcases
    int t;
    cin >> t;
    while (t--)
    {
        //taking length of line segment
        int n;
        cin >> n;

        //taking types of segments
        int x, y, z;
        cin >> x >> y >> z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout << obj.maximizeTheCuts(n, x, y, z) << endl;
    }

    return 0;
}
