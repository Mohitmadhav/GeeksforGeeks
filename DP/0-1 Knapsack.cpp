#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int answer(int w, int wt[], int val[], int n){
    if(n == 0 || w == 0)
        return 0;
    if(dp[n-1][w] != -1)
        return dp[n-1][w];

    if(wt[n-1] <= w){
        return dp[n-1][w] = max(val[n-1] + answer(w-wt[n-1], wt, val, n-1), answer(w, wt, val, n-1));
    }

    return dp[n-1][w] = answer(w, wt, val, n-1);

}

int knapSack(int W, int wt[], int val[], int n)
{
    // Your code here
    memset(dp, -1, sizeof(dp));
    return answer(W, wt, val, n);
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n,W;
        cin>>n>>W;

        int val[n];
        int wt[n];

        for(int i=0; i<n;i++)
            cin>>val[i];

        for(int i=0; i<n;i++)
            cin>>wt[i];

            cout<<knapSack(W,wt,val,n)<<endl;
    }
    return 0;
}
