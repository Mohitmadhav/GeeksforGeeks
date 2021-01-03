#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void max_profit(int a[],int n)
{
    if(n==1)
    return;
    int i=0;
    int buy=0;int sell=0;

    while(i<n-1)
    {

        while(a[i]>=a[i+1]&&i<n-1)
        {
            i++;
        }

        if(i==n-1 && sell==0)
        cout<<"No Profit";



        buy=i++;

        while(a[i]>=a[i-1] && i<n)
        i++;

        sell=i-1;

        if(buy!=n-1)
        cout<<"("<<buy<<" "<<sell<<") ";

    }



}
int main() {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];

	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }

	    max_profit(a,n);
	    cout<<endl;
	}
	return 0;
}
