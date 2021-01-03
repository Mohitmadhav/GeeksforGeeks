#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int total(int a[],int n)
{
    int water=0;int tw=0;int max;
    max=a[0];

    for(int i=1;i<n;i++)
    {
        if(a[i]>=max)
        {
            tw+=water;
            water=0;
            max=a[i];
        }
        else
        water+=max-a[i];
    }

    max=a[n-1];
    water=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>max)
        {
            tw+=water;
            water=0;
            max=a[i];
        }
        else
        water+=max-a[i];
    }

    return tw;

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

	    cout<<total(a,n)<<endl;
	}
	return 0;
}
