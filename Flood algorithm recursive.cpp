#include<bits/stdc++.h>

using namespace std;

void flood(vector<vector<int>>&a,int n,int m,int x,int y,int k,int val)
{
    if(x<0||x>=n||y<0||y>=m)
    return;

    else if (a[x][y]!=val)
    return;

    else
    {
        a[x][y]=k;
        flood(a,n,m,x+1,y,k,val);
        flood(a,n,m,x-1,y,k,val);
        flood(a,n,m,x,y+1,k,val);
        flood(a,n,m,x,y-1,k,val);
    }
}

int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    int n,m,num;
	    cin>>n>>m;

	    vector<vector<int>> a;
	    vector<int> row;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>num;
	            row.push_back(num);
	        }
	        a.push_back(row);
	    row.clear();
	    }



	    int x,y,k,val;
	    cin>>x>>y>>k;

	    val=a[x][y];

	    flood(a,n,m,x,y,k,val);

	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cout<<a[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}

	return 0;
}
