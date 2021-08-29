#include <iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

/*Given an array of positive integers. Your task is to find the leaders in the array.
Note: An element of array is leader if it is greater than or equal to all the elements
to its right side. Also, the rightmost element is always a leader.*/

/* Your program took more time than expected.Time Limit Exceeded
Expected Time Limit < 0sec*/

// Please help me with the optimization

void leaders(int a[],int n)
{
    int j=0;vector <int> v;
    for(int i=0;i<n;i++)
    {
        while(j<n)
        {
            if(a[i]>=a[j])
            j++;
        }

        if(j==n-1)
        v.push_back(a[i]);
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
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

	    leaders(ar,n);
	    cout<<endl;

	}
	return 0;
}
