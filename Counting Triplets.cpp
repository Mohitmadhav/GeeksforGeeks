#include <iostream>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int triplet(int a[],int n)
{
    int i,j,k;int c=0;
     for(i=0;i<n-2;i++)
	    {   j=i+1;
	        k=j+1;
	        while(k<n)
	        {
	            if(a[i]+a[j]==a[k])
	            {
	                c++;
	                j++;
	            }

	            else if(a[i]+a[j]<a[k])
	            {
	                j++;
	                k--;
	            }

	            k++;
	        }
	    }

	    if(c==0)
	    return -1;
	    else
	    return c;
}

int main() {
	//code
	int t;
	cin>>t;

	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n];

	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


	    sort(a,a+n);

	    cout<<triplet(a,n)<<endl;



	}
	return 0;
}
