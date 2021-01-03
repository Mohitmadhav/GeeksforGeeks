#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int missing(int a[],int n)
{
    int start=1;int temp;int i=0;
    while(i<n)
    {
        if(a[i]==start){
            start++;
        }
        else
        {
            temp=start;
        }
    }

    return temp;
}

int count(int a[],int n)
{
    int c=1;int count=1;int temp;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }

        else
        {
            if(c>count)
            {
                count=c;
                temp=a[i];
            }
            c=1;
        }

    }

    return temp;
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

	    sort(a,a+n);

	    cout<<count(a,n)<<" "<<missing(a,n)<<endl;

	}
	return 0;
}
