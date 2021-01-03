#include<bits/stdc++.h>

using namespace std;

int minCoins(int coins[],int n,int v)
{
    int res[v+1];

    res[0]=0;

    for(int i=1;i<=v;i++)
    res[i]=INT_MAX;

    for(int i=1;i<=v;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=coins[j])

            {
                int sub_res=res[i-coins[j]];

            if(sub_res!=INT_MAX && res[i]>sub_res+1)
            res[i]=sub_res+1;
            }
        }
    }
    if(res[v]!=INT_MAX)
    return res[v];
    else
    return -1;
}
int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    int v,n;
	    cin>>v>>n;

	    int coins[n];

	    for(int i=0;i<n;i++)
	    cin>>coins[i];

	    cout<<minCoins(coins,n,v)<<endl;
	}
	return 0;
}
