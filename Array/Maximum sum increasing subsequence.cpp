#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>

using namespace std;


int max_sum_subseq(int a[],int n)
{
    int msis[n];int sum=0;
    for(int i=0;i<n;i++)
    msis[i]=a[i];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j] && msis[i]<msis[j]+a[i])
            msis[i]=msis[j]+a[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        sum=max(sum,msis[i]);
    }

    return sum;
}

int main() {
	//code
	int t;
	cin>>t;

	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int ar[n];

	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];

	    }

	    cout<<max_sum_subseq(ar,n)<<endl;

	}
	return 0;
}
