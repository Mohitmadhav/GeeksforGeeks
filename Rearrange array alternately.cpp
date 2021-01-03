#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void rearrange(int a[],int n)
{
    int small=0;int large=n-1;
    int temp[n];

    int flag=true;

    for(int i=0;i<n;i++)
    {
        if(flag)
        temp[i]=a[large--];
        else
        temp[i]=a[small++];

        flag=!flag;
    }

    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
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
	    int a[n];


	    for(int i=0;i<n;i++)
	  cin>>a[i];

	  rearrange(a,n);
	  cout<<endl;
	}

	return 0;

}
