#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
	int t,n,in;

	cin>>t;

	while(t-->0)
	{
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];

	    }

	sort(ar,ar+n);

	for(int i=0;i<n;i++)
	{
	    cout<<ar[i]<<" ";
	}

	cout<<endl;
	}
	return 0;
}
