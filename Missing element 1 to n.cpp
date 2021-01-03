#include <iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main() {
	//code

	int t;
	cin>>t;

	while(t-->0)
	{
	    int n;int input;int x=0;
	    cin>>n;
	    vector<int> a;

	    for(int i=0;i<n-1;i++)
	    {
	        cin>>input;
	        a.push_back(input);

	    }

	    int s=(n*(n+1))/2;int m=0;
	    for(int i=0;i<n-1;i++)
	    {
	       m=m+a[i];
	    }

	    cout<<s-m<<endl;
	}

	return 0;
}
