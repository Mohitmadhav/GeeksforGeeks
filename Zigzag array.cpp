#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void zigzag(int a[],int n)
{
    bool flag=true;

    for(int i=0;i<n-1;i++)
    {
        if(flag)
        {
            if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
        }

        else
        {
            if(a[i]<a[i+1])
            swap(a[i],a[i+1]);
        }

        flag=!flag;
    }
}
int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;int a[n];

	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }

	    zigzag(a,n);

	    for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
