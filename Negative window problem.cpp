#include<bits/stdc++.h>

using namespace std;

int negt(int a[],int start,int end)
{
    for(int i=start;i<end;i++)
    {
        if(a[i]<0)
            return a[i];
    }
    return 0;
}
int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;

	    int a[n];

	    for(int i=0;i<n;i++)
	    cin>>a[i];

	    int k;
	    cin>>k;

	    for(int i=0;i<=n-k;i++)
	    {
	        cout<<negt(a,i,i+k)<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
